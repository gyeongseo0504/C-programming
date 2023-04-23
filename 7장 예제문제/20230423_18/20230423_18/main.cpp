#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;
	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	i = 0;
	while (i <= n)
	{
		fact *= i;
		i++;
	}
	printf("%d!은 %d입니다. \n", n, fact);

	return 0;
}
