#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));

	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;

	do
	{
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess < answer)
			printf("HIGH \n");
		if(guess > answer)
			printf("LOW \n");
	} while (guess !=answer);

	printf("�����մϴ�. �õ� Ƚ��=%d\n", tries);
	return 0;
}