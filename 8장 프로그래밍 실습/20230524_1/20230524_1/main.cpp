#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
//#define 202315023ȫ�漭



int even(int n) {
	if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int absolute(int n) {
	return abs(n);
}
int sign(int n) {
	if (n > 0) {
		return 1;
	}
	else if (n < 0) {
		return -1;
	}
	else if (n == 0) {
		return 0;
	}
}
int main(void) {
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	if (even(num) == 1) {
		printf("\neven()�� ���: ¦�� ");
	}
	else {
		printf("\neven()�� ���: Ȧ��");
	}
	printf("\nabsolute()�� ���: %d", absolute(num));
	if (sign(num) == 1) {
		printf("\nsign()�� ���: ���");
	}
	else if (sign(num) == -1) {
		printf("\nsign()�� ���: ����");
	}
	else if (sign(num) == 0) {
		printf("\nsign()�� ���: 0");
	}
	return 0;
}