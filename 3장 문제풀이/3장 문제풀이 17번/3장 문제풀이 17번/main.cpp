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

void Excersize_3_17(int solution, int answer)
{
    double r_h = 35.0 + rand() % (10 + 1) - 3;;
    double h = 5.0 + rand() % (8 + 1) - 4;
    double g = 9.80;
    double time = 0.0;
    double x = 0.0;

    printf("\n\n");
    printf("3_17 \n");
    printf("다이빙 할 수 있는 장벽이 있다 . 다이빙 선수가 수면에서 %6.2lf m 높이에 있는 바위 플랫폼에서 수평으로 뛰어내리지만,\n", r_h);
    printf("뛰어내린 지점 바로 아래에 절벽으로 부터 %6.2lf m 정도 바다를 향해 뻗어나와 있는 바위를 뛰어넘어야 한다. \n\n", h);
    printf("(a) : 이 선수가 공중에 머물러 있는 시간은 얼마 인가? \n\n");
    printf("(b) : 그러기 위해서 필요한 최소한의 출발 속력은 얼마 인가? \n\n");
    printf("(c) : 그리고 다이빙 선수가 수평방향으로 뛰어내려야 하는 이유는 무엇인가? \n\n");

    if (solution == SHOW)
    {
        time = r_h * 2 / g;


        printf("\n\n\n");
        printf("============================  풀 이  =============================\n\n");

        printf("(a) : 이 선수가 공중에 머물러 있는 시간은 얼마 인가? \n\n");
        printf("관련 공식은 Δy = v0yt + 1/2(-g)t^2 입니다.\n");
        printf("Δy:높이변화량, v0yt:초기속도, a:가속도, t:시간 \n\n");
        printf("중력가속도는 아래 방향이므로 -9.80m/s^2 입니다.\n\n");
        printf("     Δy = v0y * t + 1/2 * (-g) * t^2 \n");
        printf("-%6.2lf = 0 * t + 1/2 * (-g) * t^2 \n", r_h, g);
        printf("    t^2 = %6.2lf * 2m / %6.2lf m/s^2 \n", r_h,g);
        printf("     t  = %6.2lfm \n", sqrt(time));



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf(" t = %6.2lfm \n\n", sqrt(time));

        printf("=================================================================\n");
        printf("\n\n\n");
    }
    
    if (solution == SHOW)
    {
        x = h / time;

   
        printf("============================  풀 이  =============================\n\n");

        printf("(b) : 그러기 위해서 필요한 최소한의 출발 속력은 얼마 인가? \n\n");
        printf("관련 공식은 Δx = v0x * t입니다.\n");
        printf("Δx:수평방향거리, v0xt:초속도, t:시간 \n\n");
 
        printf("     Δx = v0x * t\n");
        printf("%6.2lfm = vox * %6.2lfs \n",h,time);
        printf("    vox = %6.2lfm / %6.2lfs \n", h, time);
        printf("    vox =  %6.2lfm/s \n",x);



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf(" vox =  %6.2lfm/s \n\n",x);

        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (solution == SHOW)
    {
        printf("============================  풀 이  =============================\n\n");

        printf("(c) : 그리고 다이빙 선수가 수평방향으로 뛰어내려야 하는 이유는 무엇인가? \n\n");
        printf("수평초기 속도 존재해야만 x축 거리가 생성되기 때문이다.\n");



        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("수평초기 속도 존재해야만 x축 거리가 생성되기 때문이다.\n");

        printf("=================================================================\n\n");
        printf("\n\n\n");
    }
}


int main(void)
{

    printf("=================================================================\n");
    printf("======================= Halla University ========================\n");
    printf("======================= Future Mobility  ========================\n");
    printf("======================== Pysics Trainer  ========================\n");
    printf("========================   Chapter 3     ========================\n");
    printf("=================================================================\n");



    Excersize_3_17(Show_Solution, Answer);


}