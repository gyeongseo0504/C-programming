#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);

	b = a / 10;      //a�� 10���� �������� ���� �ڸ��̰� 
	c = a % 10;     //a�� ������ ���� ���� �ڸ��� �����̴� 

	printf("�����ڸ� : %d\n�����ڸ� : %d", b, c);
	//���� �ڸ� ���ڸ� 10���� ���������� ���� �ڸ� ���ڿ� ������ ���� �Է� 

	return 0;
}