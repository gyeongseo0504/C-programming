#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long fact = 1;
	int i, n;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	i = 0;
	while (i <= n)
	{
		fact *= i;
		i++;
	}
	printf("%d!�� %d�Դϴ�. \n", n, fact);

	return 0;
}
