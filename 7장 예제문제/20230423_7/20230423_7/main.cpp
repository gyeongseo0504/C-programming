#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, sum;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	i = 0;
	sum = 0;

	while (i <= n)
	{
		sum += i;
		i += 2;
	}
	printf("1���� %d������ ���� %d�Դϴ� \n", n, sum);
	return 0;
}