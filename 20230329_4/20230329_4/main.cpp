#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;

	printf("�ΰ��� ������ �Է��Ͻÿ� :  ");
	scanf("%d%d", &x, &y);

	printf("x == y�� �����: %d\n", x == y);
	printf("x != y�� �����: %d\n", x != y);
	printf("x > y�� �����: %d\n", x > y);
	printf("x < y�� �����: %d\n", x < y);
	printf("x >= y�� �����: %d\n", x >= y);
	printf("x <= y�� �����: %d\n", x <= y);

	return 0;

}