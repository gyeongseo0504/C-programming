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


	double v = 90.0;
	double v1 = 110.0;
	double v0 = 30.56;
	double v2 = 25.0;
	double a = 1.7;
	double t = 3.06;

	printf("\n\n");
	printf("2_10 \n");
	printf("고속도로에서 어떤 자동차가 약 %.2lf m/s^2 의 가속도를 낼 수 있다.\n\n", a);

	printf("이 비율로 %.2lf km/h 에서 %.2lf km 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", v, v1);







	if (solution == SHOW)
	{



		printf("\n\n\n");
		printf("=================================================================\n\n");

		printf("관련 공식은 a=(v-v0)/◇t [시간=(최종속도-초기속도)/가속도] 이다.\n");
		printf("v=최종속도, v0=초기속도 , a=가속도 , ◇t=시간 \n");
		printf("가속도와 초기속도 , 최종속도의 미터와 초가 안맞으니 맞혀줍니다. \n");
		printf("초기 속도 = %.2lf km/h = %.2lf m/s , 최종 속도 = %.2lf km/h = %.2lf m/s 로 바꿔줍니다. \n", v0, v2, v1, v);
		printf("이때 가속도는 등가속도라고 가정할 수 있으므로 다음과 같은 등가속도운동의 공식을 사용합니다. \n");
		printf("a=(v-v0)/◇t 에서 t를 구해야되니 t를 넘겨줍니다. \n");
		printf("넘겨준 ◇t=(v-v0)/a 공식에 바꿔준 수를 대입 해 줍니다 .\n");
		printf("◇t = ( %.2lf m/s - %.2lf m/s) / %.2lf m/s^2 , ◇t = %.2lf s \n", v0, v2, a, t);
		printf("이 자동차는 %.2lf km/h 에서 %.2lf km/h 로 가속하는데에는 \n", v, v1, t);


		printf("\n=================================================================\n");
		printf("\n\n\n");


	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");

		printf("따라서 ◇t=(v-v0)/a 에는 %.2lf 가 소요된다. \n", t);

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