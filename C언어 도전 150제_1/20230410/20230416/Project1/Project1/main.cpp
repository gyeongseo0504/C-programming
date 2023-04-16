#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_10(int solution, int answer)
{
	printf("\n\n");
	printf("2_10 \n");
	printf("육상 선수가 지면과 30˚의 각으로 뛰어서 7.80 m만큼 멀리뛰기를 하려고 한다.\n\n");

	printf("(a) 출발속력은 얼마로 해야 하는가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		printf("풀이과정을 입력해주세요.\n");

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("답을 적어주세요.\n");

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 이 속력이 정확히 5.0 %% 증가한다면 이 선수는 얼마나 더 멀리 뛸 수 있을까?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");

		printf("풀이과정을 입력해주세요.\n");

		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("답을 적어주세요.\n");

		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");



	Excersize_2_10(Show_Solution, Answer);


}