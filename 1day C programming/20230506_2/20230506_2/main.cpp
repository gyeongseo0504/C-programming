#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;
	printf("영문자를 입력하세요: ");
	scanf("%c", &letter);

	if (letter >= 'a' && letter <= 'z') {
		printf("소문자 입니다.\n");
	}
	else if (letter >= 'A' && letter <= 'Z') {
		printf("대문자 입니다.\n");
	}
	else {
		printf("영문자가 아닙니다.\n");
	}
}