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


	double frist_velocity = 90.0;
	double final_velocity = 110.0;
	double change_of_velocity = 20.0;
	double final_change_of_velocity = 0;
	double acceleration = 1.7;
	double time= 0.0;


	printf("\n\n");
	printf("2_10 \n");
	printf("고속도로에서 어떤 자동차가 약 %6.2lf m/s^2 의 가속도를 낼 수 있다.\n\n", acceleration);

	printf("이 비율로 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", frist_velocity, final_velocity);


	if (solution == SHOW)
	{
		final_change_of_velocity = change_of_velocity * 1000 / 3600;
		//change_of_velocity = ((final_velocity)-(frist_velocity));
		time = final_change_of_velocity / acceleration;

		printf("\n\n\n");
		printf("============================  풀 이  =============================\n\n");

		printf("관련 공식은 등가속도운동의 공식 a=Δv/Δt 입니다 \n");
		printf("Δv는 (최종속도(v) - 초기속도(v0)) , a는 가속도 , Δt는 시간 변화량 이다. \n");

		printf("Δv= (최종속도) %6.2lf km/h - (초기속도) %6.2lf km/h, Δv =  %6.2lf km/h . \n", final_velocity, frist_velocity , change_of_velocity);
		printf("문제의 해답인 시간을 구하기 위해서는 km/h 를 m/s (으)로 단위를 맞춰줘야 합니다. \n");
		printf("Δv를 1 km = 1000 m로 *1000 을(를) 해주고 h = 3600 s 이므로 /3600 s 을(를) 해줍니다.\n");
		printf("그러므로 Δv 의 단위를 맞춰주면 %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s 이고.\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
		printf("Δt = ( %6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2 = %6.2lf s \n", final_velocity, frist_velocity, acceleration, time);

		printf("\n=================================================================\n");
		printf("\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("따라서 이 자동차는 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는데에는 걸리는 시간은 \n", frist_velocity, final_velocity);
		printf("%6.2lf s가 소요된다. \n", time);

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