#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x,y,r;



	printf("�� ���� ������ �Է��Ͻÿ�(ū��, ������):");
	scanf("%d%d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.\n", x);

	return 0;
}