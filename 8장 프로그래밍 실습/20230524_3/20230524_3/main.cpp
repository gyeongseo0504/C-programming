#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//202315023 ȫ�漭
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
	printf("�ҵ��� �Է��ϼ���(����): ");
	scanf("%d", &income);
	printf("�ҵ漼�� %d�Դϴ�", get_tax(income));
	return 0;
}
