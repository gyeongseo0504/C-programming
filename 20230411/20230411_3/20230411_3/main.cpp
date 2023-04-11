#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int money, change;
	int a, b, c, d, e;

	printf("돈을 넣어주세요:");
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
		

		printf("음료수가 나왔습니다.");
		printf("1000원짜리 지폐 %d개\n",a);
		printf("500원짜리 동전 %d개\n", b);
		printf("100원짜리 동전 %d개\n", c);
		printf("50원짜리 동전 %d개\n", d);
		printf("10원짜리 동전 %d개\n", e);


	}
	else if (money < change)
	{
		printf("%d원이 반환 되었습니다.");
	}
	return 0;
}	