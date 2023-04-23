#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int initial_money = 50;
	int goal = 250;
	int i;
	int wins = 0;

	srand((unsigned)time(NULL));
	for (i = 0; i < 100; i++)
	{
		int cash = initial_money;
		while (cash > 0 && cash < goal)
		{
			if ((double)rand() / RAND_MAX < 0.5) cash++;
			else
				cash--;

		}
		if (cash == goal) wins++;
	}
	printf("�ʱ� �ݾ� $%d \n", initial_money);
	printf("��ǥ �ݾ� $%d \n", goal);
	printf("100�� �߿��� %d�� ���� \n", wins);

	return 0;
}