#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int score;

	printf("점수를 입력해주세요 :");
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A \n");
	}
	else if (score >= 80)
	{
		printf("B \n");
	}
	else if (score >= 70)
	{
		printf("C \n");
	}
	else if (score >= 60)
	{
		printf("D \n");
	}
	else
	{

		printf("F\n");

	}
	printf("수고하셨습니다.");
	return 0;
}