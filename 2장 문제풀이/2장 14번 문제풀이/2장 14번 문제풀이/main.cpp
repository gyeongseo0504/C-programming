#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI



void Excersize_2_14(int solution, int answer)
{
	srand(time(NULL));

	double initial_velocity = 0.0;
	double final_velocity = 30.0 + rand() % (8 + 1) - 4;
	double acceleration = 3.00 + rand() % (5 + 1) - 2;
	double distance = 0.0;

	printf("\n\n");
	printf("2_14 \n");
	printf("경비행기가 이륙하기 위해서는 속력이 %6.2lf m/s 에 도달해야 한다.\n", final_velocity);
	printf("%6.2lf m/s^2 으로 일정하게 가속한다면 이륙 속도에 도달하기 위해서 얼마의 활주거리가 필요한가? \n\n", acceleration);

	if (solution == SHOW)
	{
		distance = ((final_velocity * final_velocity) - (initial_velocity * initial_velocity)) / (2 * acceleration);

		printf("\n\n\n");
		printf("============================  풀 이  =============================\n\n");

		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");
		printf("v:최종속도, v0:초기속도, a:가속도, Δx : 거리변화량   \n\n");
		printf("v^2 - v0^2 = 2 * a * Δx\n");
		printf("(%6.2lfm/s)^2 - (%6.2lfm/s)^2  =  2 * (%6.2lfm/s^2) * Δx   \n", final_velocity, initial_velocity, acceleration);
		printf("Δx = (%6.2lfm/s)^2 / (2 *%6.2lfm/s^2) \n", (final_velocity), acceleration);
		printf("Δx = %6.2lfm \n", distance);


		printf("\n=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("Δx = %6.2lf m \n\n", distance);

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



	Excersize_2_14(Show_Solution, Answer);


}