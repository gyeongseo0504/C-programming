#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	double r, n;
	double result = 1.0;

	printf("�Ǽ� ���� �Է��ϼ��� :");
	scanf("%lf", &r);

	printf("�ŵ�����Ƚ���� �Է��ϼ��� :");
	scanf("%lf", &n);

	while (n != 0)
	{
		result *= r;
		n--;
	}
	printf("������� %lf", result);

	return 0;
}