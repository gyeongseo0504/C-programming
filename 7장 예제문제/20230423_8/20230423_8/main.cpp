#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n, sum;

	i = 0;
	sum = 0;

	while (i < 5)
	{
		printf("값을 입력하세요 : \n");
		scanf("%d", &n);
		sum += n;
		i++;
	}
	printf("합계는 %d입니다. \n", sum);
	return 0;
}