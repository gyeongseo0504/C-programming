#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money, change;
	int a, b, c, d, e;

	printf("���� �־��ּ���:");
	scanf("%d", &money);

	change = money - 500;
	a = change / 1000;
	change = change % 1000;
	b = change / 500;
	change = change % 500;
	c = change / 100;
	change = change % 100;
	d = change / 50;
	change = change % 50;
	e = change / 10;
	change = change % 10;

	if (money >= change)
	{
		

		printf("������� ���Խ��ϴ�.");
		printf("1000��¥�� ���� %d��\n",a);
		printf("500��¥�� ���� %d��\n", b);
		printf("100��¥�� ���� %d��\n", c);
		printf("50��¥�� ���� %d��\n", d);
		printf("10��¥�� ���� %d��\n", e);


	}
	else if (money < change)
	{
		printf("%d���� ��ȯ �Ǿ����ϴ�.");
	}
	return 0;
}	