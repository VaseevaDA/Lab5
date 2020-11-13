#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isAlpha(char a) {
	return (((a >= 'a') && (a <= 'z')) || ((a >= 'A') && (a <= 'Z')));
}
int main() {
	int c = 0;
	printf("Print array\n");
	int count = 0;
	while (((c = getchar()) != EOF && c != '\n')) {
		if (isAlpha(c)) {
			printf("%c", c);
			count++;
		}
		else {
			for (size_t i = 0; i < count; i++) {
				printf("| |");
			}
			count = 0;
		}
	}
	for (size_t i = 0; i < count; i++) {
		printf("| |");
	}
}