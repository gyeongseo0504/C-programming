#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n = 0;


	printf("���ڸ� �Է����ּ��� :");
	scanf("%d", &n);

	if (n >= 0)
	{
		printf("%d �� ������ %d�Դϴ�.",n,abs(n));
	}
	else if (n < 0)
	{
		printf("%d �� ������ %d�Դϴ�.", n, abs(n));
	}
	
	printf("�����մϴ�.");
	return 0;
}