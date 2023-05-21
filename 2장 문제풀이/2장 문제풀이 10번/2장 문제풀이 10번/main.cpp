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

	double initial_velocity = 90.0;
	double final_velocity = 110.0;
	double change_of_velocity = 20.0;
	double final_change_of_velocity = 0;
	double acceleration = 1.7;
	double time = 0.0;

	printf("\n\n");
	printf("2_10 \n");
	printf("고속도로에서 어떤 자동차가 약 %6.2lf m/s^2 의 가속도를 낼 수 있다.\n", acceleration);
	printf("이 비율로 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", initial_velocity, final_velocity);

	if (solution == SHOW)
	{
		final_change_of_velocity = change_of_velocity * 1000 / 3600;
		//change_of_velocity = ((final_velocity)-(frist_velocity));
		time = final_change_of_velocity / acceleration;

		printf("\n\n\n");
		printf("============================  풀 이  =============================\n\n");

		printf("관련 공식은 a = Δv / Δt 입니다 \n");
		printf("a는 가속도 ,Δv는 속도 변화량 , Δt는 시간 변화량 입니다. \n\n");
		printf("Δt = ( %6.2lf km/h - %6.2lf km/h) / %6.2lfm/s^2 . \n", final_velocity, initial_velocity, acceleration);
		printf("km/h 를 m/s (으)로 단위를 맞춰줍니다. \n\n");
		printf("%6.2lf km/h = (%6.2lf * 1000 / 3600 )m/s = %6.2lf m/s\n",change_of_velocity,change_of_velocity,final_change_of_velocity);
		printf("Δt =  %6.2lf m/s / %6.2lf m/s^2\n", final_change_of_velocity, acceleration);

		printf("\n=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");


		printf("가속 하는데 걸리는 Δt=  %6.2lf s \n", time);

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