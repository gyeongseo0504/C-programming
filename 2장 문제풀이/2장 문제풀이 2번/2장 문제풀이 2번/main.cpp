#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI




void Excersize_2_2(int solution, int answer)
{
	srand(time(NULL));

	double speed = 5.31 + rand() % (5 + 1) - 2;
	double velocity = 42.195 + rand() % (9 + 1) - 4;
	double time = 0.0;
	double time_s = 2.0 + rand() % (10 + 1) - 1;
	double time_h = 12.0 + rand() % (10 + 1) - 4;
	double time_m = 23.0 + rand() % (4 + 1) - 2;
	double time_x = 0.0;
	double distance = 0.0;
	double x = 100.0 + rand() % (100 + 10) - 10;

	printf("\n\n");
	printf("2_2 \n");
	printf("1992년에 스페인 바르셀로나에서 개최한 제 24회 올림픽 마라톤 경기에서\n");
	printf("우리나라 황영조 선수는 %6.2lf Km를 %6.2lf시간 %6.2lf분 %6.2lf초에 뛰어 우승하였다 .\n", velocity, time_h, time_m, time_s);
	printf("황영도 선수는 %6.2lfKm를 평균 몇 초에 달린 셈 인가? \n", x);

	if (solution == SHOW)
	{
		distance = velocity * 1000;
		time = x / speed;
		time_x = ((time_h * 3600) + (time_m * 60) + time_s);
		speed = distance / time_x;
		printf("\n\n");
		printf("============================  풀 이  =============================\n\n");

		printf("관련 공식은 s = v / t 입니다 \n");
		printf("s는 속도 ,v는 속력, t는 시간 입니다. \n");
		printf("s =  %6.2lfKm / ( %6.2lfh %6.2lfm %6.2lfs ) \n\n", velocity, time_h, time_m, time_s);
		printf("km/h 를 m/s (으)로 단위를 변환하면. \n\n");
		printf("%6.2lfkm * 1000m/km = %6.2lfm\n(%6.2lfh %6.2lfm%6.2lfs) = (%6.2lfh * 3600s/h) + (%6.2lfm * 60s/m) + %6.2lfs = %6.2lfs\n\n", velocity, distance, time_h, time_m, time_s, time_h, time_m, time_s, time_x);
		printf("t = x / s \n");
		printf("  = %6.2lfm / %6.2lfm/s \n", x, speed);
		printf("  =%6.2lfs\n", time);


		printf("\n=================================================================\n");
		printf("\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");


		printf("t =%6.2lf s \n", time);

		printf("=================================================================\n");
		printf("\n\n");
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

	Excersize_2_2(Show_Solution, Answer);

}