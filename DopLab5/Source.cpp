#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isStop(char a) {
	switch (a) {
	case '.':
		return 1;
	case ',':
		return 2;
	case '?':
		return 4;
	case ':':
		return 8;
	default:
		return 0;
	}
}
int main() {
	int c = 0;
	printf("Print array\n");
	while (((c = getchar()) != EOF && c != '\n')) {
		if (isStop(c) == 0) {
			printf("%c", c);
		}
		else if (isStop(c) == 1) {
			printf("|dot|");
		}
		else if (isStop(c) == 2) {
			printf("|comma|");
		}
		else if (isStop(c) == 4) {
			printf("|questionmark|");
		}
		else if (isStop(c) == 8) {
			printf("|colon|");
		}
	}
}