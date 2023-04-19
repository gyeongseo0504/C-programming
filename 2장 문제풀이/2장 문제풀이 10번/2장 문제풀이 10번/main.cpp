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


	double velocity = 90.0;
	double velocity_k_m = 110.0;
	double velocity_m_s = 25.0;
	double velocity_f = 30.56;
	double acceleration = 1.7;
	double time = 3.06;


	printf("\n\n");
	printf("2_10 \n");
	printf("고속도로에서 어떤 자동차가 약 %6.2lf m/s^2 의 가속도를 낼 수 있다.\n\n", acceleration);

	printf("이 비율로 %6.2lf km/h 에서 %6.2lf km 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", velocity, velocity_k_m);







	if (solution == SHOW)
	{



		printf("\n\n\n");
		printf("============================  풀 이  =============================\n\n");

		printf("관련 공식은 등가속도운동의 공식입니다 \n");
		printf("관련 공식 Δt=(v-v0)/a   시간(t) = (최종속도(v) - 초기속도(v0)) / 가속도(a) 입니다.\n");
		printf("v는 최종속도, v0는 초기속도 , a는 가속도 , Δt는 시간 변화량 이다. \n\n");

		velocity_m_s = velocity * 1000 / 3600;

		printf("문제의 해답인 가속도를 구하기 위해서는 km/h 를 m/s (으)로 단위를 맞춰줘야 합니다. \n");
		printf("1 km = 1000 m로 *1000 을(를) 해주고 h = 3600 s 이므로 /3600 s 을(를) 해줍니다.\n");
		printf("그러므로 초기속도는 %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s 이고.\n", velocity, velocity, velocity_m_s);
		printf("최종 속도는 = %6.2lf km/h * 1000 / 3600 m/s = %6.2lf m/s 로 바꿔줍니다. \n\n", velocity_k_m, velocity_f);

		printf("이후에 v, v0,a를 구하고 이를 활용하여 Δt를 구해주면 됩니다.\n");
		printf("v는 최종 속도로 가속된 자동차의 속도이므로 v = %6.2lf m/s 입니다.\n", velocity_f);
		printf("v0는 초기 속도로 % 6.2lf km / h 달리던 자동차의 속도로 v0 = % 6.2lf m / s 입니다.\n", velocity, velocity_m_s);
		printf("a 는  %6.2lf m 달리던 자동차의 가속도로 a = %6.2lf m 입니다.\n", velocity, acceleration);


		printf("\n=================================================================\n");
		printf("\n\n\n");


	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("관련 공식 Δt=(v-v0)/a 에 대입하면\n");
		printf("Δt = ( %6.2lf m/s - %6.2lf m/s) / %.2lf m/s^2 , Δt = %.2lf s \n", velocity_f, velocity_m_s, acceleration, time);
		printf("따라서 이 자동차는 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는데에는 \n", velocity, velocity_k_m);
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