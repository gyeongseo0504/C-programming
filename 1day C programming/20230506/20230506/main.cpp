#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
int main(void) {
	int num = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}
}
*/

int main(void) {
	int num = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	num %= 2;

	switch (num) {
	case 0:
		printf("¦���Դϴ�.\n");
		break;
	default:
		printf("Ȧ���Դϴ�.\n");
		break;
	}
}