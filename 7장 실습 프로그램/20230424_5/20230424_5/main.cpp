#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	double r, n;
	double result = 1.0;

	printf("실수 값을 입력하세요 :");
	scanf("%lf", &r);

	printf("거듭제곱횟수를 입력하세요 :");
	scanf("%lf", &n);

	while (n != 0)
	{
		result *= r;
		n--;
	}
	printf("결과값은 %lf", result);

	return 0;
}