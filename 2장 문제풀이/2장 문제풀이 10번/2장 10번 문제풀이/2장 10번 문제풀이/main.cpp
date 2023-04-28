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
	double time;


	printf("\n\n");
	printf("2_10 \n");
	printf("고속도로에서 어떤 자동차가 약 %6.2lf m/s^2 의 가속도를 낼 수 있다.\n\n", acceleration);

	printf("이 비율로 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", frist_velocity, final_velocity);







	if (solution == SHOW)
	{



		printf("\n\n\n");
		printf("============================  풀 이  =============================\n\n");

		printf("관련 공식은 등가속도운동의 공식입니다 \n");
		printf("관련 공식 Δt=(v-v0)/a   시간(t) = (최종속도(v) - 초기속도(v0)) / 가속도(a) 입니다.\n");
		printf("v는 최종속도, v0는 초기속도 , a는 가속도 , Δt는 시간 변화량 이다. \n\n");

		final_change_of_velocity = change_of_velocity * 1000 / 3600;

		//change_of_velocity = ((final_velocity)-(frist_velocity));


		printf("식을 간단히 해주기 위해서 (최종속도(v) - 초기속도(v0))를  먼저 해줍니다. \n");
		printf("(최종속도) %6.2lf - (초기속도) %6.2lf =  %6.2lf . \n", final_velocity, frist_velocity , change_of_velocity);
		printf("문제의 해답인 시간을 구하기 위해서는 km/h 를 m/s (으)로 단위를 맞춰줘야 합니다. \n");
		printf("1 km = 1000 m로 *1000 을(를) 해주고 h = 3600 s 이므로 /3600 s 을(를) 해줍니다.\n");
		printf("그러므로 최종속도에서 초기속도를 뺀 값의 단위를 맞춰주면 %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s 이고.\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
		printf("%6.2lf km/h * 1000 / 3600 m/s = %6.2lf m/s 로 바꿔줍니다. \n\n", change_of_velocity, final_change_of_velocity);

		printf("이후에 v, v0,a를 구하고 이를 활용하여 Δt를 구해주면 됩니다.\n");
		printf("v - v0 는 최종 속도- 초기속도 이므로 v-v0 = %6.2lf m/s 입니다.\n", final_change_of_velocity);
		printf("a 는  %6.2lf km/h 에서 %6.2lf km/h 까지 달리던 자동차의 가속도로 a = %6.2lf m 입니다.\n", frist_velocity, final_velocity, acceleration);


		printf("\n=================================================================\n");
		printf("\n\n\n");


	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		time = final_change_of_velocity / acceleration;

		printf("관련 공식 Δt=(v-v0)/a 에 대입하면\n");
		printf("Δt = ( %6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2 , Δt = %.2lf s \n", final_velocity, frist_velocity, acceleration, time);
		printf("따라서 이 자동차는 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는데에는 \n", frist_velocity, final_velocity);
		printf("Δt=(v-v0)/a , %6.2lf s가 소요된다. \n", time);

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