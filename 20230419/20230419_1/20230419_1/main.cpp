#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL)); //난수 발생기 시드 설정

	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;     //반복구조
	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;

		if (guess < answer) //사용자가 입력한 정수가 정답보다 높으면
			printf("HIGH \n");
		if (guess > answer) //사용자가 입력한 정수가 정답보다 낮으면
			printf("LOW \n");
	} while (guess != answer);

	printf("추카포카 ! 정답이에오 !!!!!!!!! 시도횟수=%d\n", tries);
	return 0;
}