#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int halflife;
	double initial;
	double current;
	int years = 0;

	printf("반감기를 입력하시오(년): ");
	scanf("%d", &halflife);

	initial = 100.0;
	current = initial;
	while (current > initial /10.0)
	{
		years += halflife;
		current = current / 2.0;
		printf("%d년 후에 남은 양=%f\n", years, current);
	}
	printf("1/10 이하로 되기까지 걸린 시간 =%d년\n", years);
	return 0;
}