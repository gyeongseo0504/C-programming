#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int get_integer(void)
{
	int n;
	do {
		printf("������ �Է��Ͻÿ� : ");
		scanf("%d", &n);

	} while (n <= 0);

	return n;
}

int is_prime(int n)
{
	int i;
	int j;
	for (i = 2; i < n; i++)
	{
		for (j = 2; j < i; j++) {

			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

int main(void)
{
	int n;
	n = get_integer();

	
	is_prime(n);
	printf("%d������ �Ҽ��� %d�Դϴ�\n", is_prime(n));

	return 0;
}