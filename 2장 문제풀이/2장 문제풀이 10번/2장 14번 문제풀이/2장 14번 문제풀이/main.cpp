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




void Excersize_2_14(int solution, int answer)
{

	double frist_velocity = 0.0;
	double final_velocity = 30.0;
	double acceleration = 3.00;
	double distance;


	printf("\n\n");
	printf("2_14 \n");
	printf("경비행기가 이륙하기 위해서는 속력이 %6.2lf m/s 에 도달해야 한다.\n\n", final_velocity);

	printf("%6.2lf m/s^2 으로 일정하게 가속한다면 이륙 속도에 도달하기 위해서 얼마의 활주거리가 필요한가? \n\n", acceleration);







	if (solution == SHOW)
	{



		printf("\n\n\n");
		printf("============================  풀 이  =============================\n\n");

		printf("관련 공식은 등가속도운동 공식인 v^2 - v0^2 = 2 * a * Δx 이다.\n");
		printf("v^2 - v0^2 = (2 * a * Δx )이라는 공식을 Δx = v-v0/2*a 로 변형해줍니다\n");
		printf("나오는 공식인 거리(Δx) = (최종속도(v) - 초기속도(v0)) / (2*가속도(a)) 에 \n");
		printf("v0(초기속도)는 출발하기 전에 속력이므로 %6.2lf 입니다.  \n", frist_velocity);
		printf("v(최종속도)는 도달하기 위한 속력이므로 %6.2lf 입니다.  \n", final_velocity);
		printf("a(가속도)는 %6.2lf 으로 가속하는 값입니다.  \n", acceleration);
		printf("v(최종속도), v0(초기속도) , a(가속도) 값들을 공식에 대입하면 \n");
		printf("이 경비행기가 %6.2lf m/s 에서 %6.2lf m/s 로 %6.2lf m/s^2 를 가속하여 이륙 속도에 도달하기 위한 Δx(활주거리)가 나옵니다. \n\n", frist_velocity, final_velocity, acceleration);

		printf("\n=================================================================\n");
		printf("\n\n\n");


	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		distance = ((final_velocity * final_velocity) - (frist_velocity * frist_velocity)) / (2 * acceleration);

		printf("등가속도운동 공식인 (거리(Δx) = (최종속도(v) - 초기속도(v0)) / (2*가속도(a))) 에 \n");
		printf("v (최종속도 값), v0 (초기속도 값) , a (가속도 값)을 대입하면\n");
		printf("Δx = (( %6.2lf m/s  -%6.2lf m/s)) / (2  *%6.2lf m/s^2) = %6.2lf m 입니다. \n", final_velocity, frist_velocity, acceleration, distance);

		printf("따라서 이 경비행기가 이륙 속도에 도달하기 위한 Δx(활주거리)는 \n");
		printf("%6.2lf m입니다. \n\n", distance);

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