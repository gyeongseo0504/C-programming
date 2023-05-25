#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//202315023 홍경서
int get_tax(int income) {
	if (income > 1000) {
		return (income - 1000) * 0.1 + 1000 * 0.08;
	}
	else {
		return income * 0.08;
	}
}
int main(void) {
	int income;
	printf("소득을 입력하세요(만원): ");
	scanf("%d", &income);
	printf("소득세는 %d입니다", get_tax(income));
	return 0;
}
