#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
int main(void) {
	int num = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}
}
*/

int main(void) {
	int num = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	num %= 2;

	switch (num) {
	case 0:
		printf("짝수입니다.\n");
		break;
	default:
		printf("홀수입니다.\n");
		break;
	}
}