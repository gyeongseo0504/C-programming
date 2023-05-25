#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
//#define 202315023홍경서



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
	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	if (even(num) == 1) {
		printf("\neven()의 결과: 짝수 ");
	}
	else {
		printf("\neven()의 결과: 홀수");
	}
	printf("\nabsolute()의 결과: %d", absolute(num));
	if (sign(num) == 1) {
		printf("\nsign()의 결과: 양수");
	}
	else if (sign(num) == -1) {
		printf("\nsign()의 결과: 음수");
	}
	else if (sign(num) == 0) {
		printf("\nsign()의 결과: 0");
	}
	return 0;
}