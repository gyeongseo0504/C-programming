#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int money, change;
	int price, c5000, c1000, c500, c100 , c10;

	printf("물건 값을 입력하시오: ");
	scanf("%d", &price);

	printf("투입한 금액을 입력하시오: ");
	scanf("%d", &money);
	change = money - price;

	c5000 = change / 1000;
	change = change % 1000;

	c1000 = change / 1000;
	change = change % 1000;

	c500 = change / 500;
	change = change % 500;

	c100 = change / 100;
	change = change % 100;

	c10 = change / 10;
	change = change % 10;

	printf("거스름돈은 다음과 같습니다.\n오천원권:  %d장\n ",c5000);
	printf("거스름돈은 다음과 같습니다.\n천원권:  %d장\n ", c1000);
	printf("오백원 동전:  %d개\n", c500);
	printf("백원동전 : %d개\n ", c100);
	printf("십원동전 : %d개\n ", c10);
	return 0;

}