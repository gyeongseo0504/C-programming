#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

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
void Excersize_2_4(int solution, int answer)
{

    srand(time(NULL));

    double t = 6.0 + rand() % (9 + 1) - 4;
    double x = 60.0 + rand() % (9 + 1) - 4;
    double vavg = 10.0 + rand() % (9 + 1) - 4;
    double s = 2.0 + rand() % (9 + 1) - 4;
    double m = 30.0 + rand() % (9 + 1) - 4;
    double v = 0.0 + rand() % (9 + 1) - 4;

    printf("\n\n");
    printf("2-4 \n");
    printf("수평면 위에 정지하고 있던 물체가 한쪽방향으로 직선운동을 할 때\n\n");
    printf("이동거리와 시간의 관계가 그림 P2-4와 같다. \n\n");
    printf("(a) 출발하여 %6.2lf s 동안 물체의 평균속력은 몇 m/s인가? \n", t);
    printf("(b) 출발 후 5 s 때의 순간속력은 몇 m/s 인가? \n\n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================    풀 이   =============================\n\n");
        printf("(a) 출발하여 %6.2lf s 동안 물체의 평균속력은 몇 m/s인가? \n", t);
        printf("관련 공식은 : vavg = Δx / Δt입니다. \n\n");
        printf("vavg : 평균속력, Δx  : 변위, Δt : 시간변화량\n");
        printf("vavg = Δx / Δt \n\n");

        printf("     = (%6.2lfm  - 0m) / (%6.2lfs - 0s) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lf m/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        vavg = x / t;
        printf("vavg = % 6.2lf m/s \n\n", vavg);

        printf("=================================================================\n\n");
    }


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("(b) 출발 후 5 s 때의 순간속력은 몇 m/s 인가? \n\n");
        printf("=========================    풀 이   ============================\n");
        printf("관련 공식은 : v = Δx / Δt 입니다. \n\n");
        printf("v : 순간속력, Δx : 거리, Δt : 시간\n");
        printf("v = Δx / Δt\n\n");

        printf(" = (%6.2lfm - 0m) / (%6.2lfs - 0s) \n", m, s);
        v = m / s;
        printf("  = %6.2lf m/s\n\n", v);

    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");
        v = m / s;
        printf("v = %6.2lfm/s \n\n", v);
        printf("=================================================================\n\n");
        printf("\n\n\n");
    }

}

void Excersize_2_6(int solution, int answer)
{

    srand(time(NULL));

    double t = 25 + rand() % (9 + 1) - 4;
    double x = 200 + rand() % (9 + 1) - 4;
    double vavg = 0 + rand() % (9 + 1) - 4;
    double d = 0;

    printf("\n\n");
    printf("2-6 \n");
    printf("달리기 선수가 %6.2lfm 트랙 한바퀴를 %6.2lfs 에돈다.\n", x, t);
    printf("선수 (a) 평균속력과 (b) 평균속도를 구하여라.\n\n");


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    풀 이   =============================\n\n");
        printf("(a) 선수의 평균 속력을 구하는 방법은 다음과 같습니다 \n\n");
        printf("관련공식 : vavg = Δx / Δt 입니다.\n");
        printf("vavg : 평균속력, Δx : 거리, Δt : 시간변화량\n\n");

        printf("vavg = Δx / Δt\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lfm/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        vavg = x / t;

        printf("vavg = %6.2lfm/s \n\n", vavg);

        printf("=================================================================\n\n");

        printf("\n\n\n");
    }


    if (solution == SHOW)
    {
        printf("\n\n\n");

        printf("=========================    풀 이   ============================\n");
        printf("(b) 선수의 평균 속도를 구하는 방법은 다음과 같습니다. \n\n");
        printf("관련공식 : vavg = Δd / Δt 입니다. \n");
        printf("vavg : 평균속도, Δd : 변위, Δt : 시간변화량 \n\n");

        printf("vavg = Δd / Δt\n\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n\n", d, t);
        vavg = d / t;
        printf("     = %6.2lf\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        vavg = d / t;

        printf("vavg = %6.2lf m/s \n\n", vavg);

        printf("=================================================================\n\n");
        printf("\n\n\n");
    }

}

void Excersize_2_8(int solution, int answer)
{

    printf("\n\n");
    printf("2-8 \n");
    printf("가속도의 값이 +1이라는 의미는?\n");
    printf("(a):속도의 변화가 없다.\n");
    printf("(b):속도가 점점 커진다.\n");
    printf("(c):속도가 점점 작아진다.\n");
    printf("(d):속도가 일정하다.\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("가속도는 시간이 변화에 따라 속도의 변화를 알려주는 것을 말합니다. \n");
        printf("그렇기 때문에 가속도의 값이 +1인 경우 +1씩 계속 증가한다는 것을 알 수 있습니다. \n");
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("답:(b)\n");
        printf("가속도의 값이 +1인 것을 물어본 것이기 때문에 속도가 점점 더 늘어나는 것이 맞다.\n");
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}


void Excersize_2_10(int solution, int answer)
{
    srand(time(NULL));

    double initial_velocity = 90.0 + rand() % (9 + 1) - 4;
    double final_velocity = 110.0 + rand() % (9 + 1) - 4;
    double change_of_velocity = 0.0;
    double final_change_of_velocity = 0;
    double acceleration = 1.7 + rand() % (5 + 1) - 2;
    double time = 0.0;

    printf("\n\n");
    printf("2_10 \n");
    printf("고속도로에서 어떤 자동차가 약 %6.2lf m/s^2 의 가속도를 낼 수 있다.\n", acceleration);
    printf("이 비율로 %6.2lf km/h 에서 %6.2lf km/h 로 가속하는 데 걸리 는 시간은 얼마나 될까? \n\n", initial_velocity, final_velocity);

    if (solution == SHOW)
    {
        change_of_velocity = final_velocity - initial_velocity;
        final_change_of_velocity = change_of_velocity * 1000 / 3600;
        //change_of_velocity = ((final_velocity)-(frist_velocity));
        time = final_change_of_velocity / acceleration;

        printf("\n\n\n");
        printf("============================  풀 이  =============================\n\n");

        printf("관련 공식은 a = Δv / Δt 입니다 \n");
        printf("a는 가속도 ,Δv는 속도 변화량 , Δt는 시간 변화량 입니다. \n\n");
        printf("Δt = ( %6.2lf km/h - %6.2lf km/h) / %6.2lfm/s^2 . \n", final_velocity, initial_velocity, acceleration);
        printf("km/h 를 m/s (으)로 단위를 맞춰줍니다. \n\n");
        printf("%6.2lf km/h = (%6.2lf * 1000 / 3600 )m/s = %6.2lf m/s\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
        printf("Δt =  %6.2lf m/s / %6.2lf m/s^2\n", final_change_of_velocity, acceleration);

        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");


        printf("Δt=  %6.2lf s \n", time);

        printf("=================================================================\n");
        printf("\n\n\n");
    }
}





void Excersize_2_12(int solution, int answer)
{
    srand(time(NULL));
    double distance1 = 25;
    distance1 = 25 + rand() % (5 + 1) - 2.5;
    double distance2 = 10;
    distance2 = 10 + rand() % (3 + 1) - 1;
    double distance3 = 0;
    double time = 6;
    time = 3 + rand() % (1 + 1) - 0.5;
    double time1 = 0;
    double distance = distance1 - distance2;
    double average_speed = distance / time;
    double space = ((distance1 * distance1) - (distance3 * distance3)) / (2 * average_speed);

    printf("\n\n");
    printf("2-12 \n");
    printf("어떤 자동차가 %6.2lfs동안에 %6.2lfm/s에서 %6.2lfm/s로 가속된다.\n", time, distance2, distance1);
    printf("이 자동차의 가속도는 얼마인가? 이 자동차가 그동안 달린 거리는 얼마인가? \n");
    printf("단, 가속도는 일정하다.\n");


    if (solution == SHOW)
    {


        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("관련공식: a=△v/△t\n");
        printf("a:가속도, △v:속도의 변화량, △t:걸린 시간\n");
        printf("△v = v -v0\n");
        printf("    = %6.2lfm/s - %6.2lfm/s\n\n", distance1, distance2);
        printf("△t = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n\n", time, time1);
        printf("a   = (%6.2lfm/s -%6.2lfm/s) / (%6.2lfs -%6.2lfs)", distance1, distance2, time, time1);
        printf("\n\n");
        printf("관련공식: v^2-V0^2=2as\n");
        printf("v:나중속도, v0:처음속도, a:가속도, s:거리\n");
        printf("s   = ((%6.2lfm/s)^2 - (%6.2lfm/s)^2) / (2*%6.2lfm/s^2)\n", distance1, distance3, average_speed);
        printf("    = (%6.2lfm/s - %6.2lfm/s) /%6.2lfm/s^2\n", distance1 * distance1, distance3 * distance3, average_speed * 2);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        printf("a =%6.2lfm/s^2\n", average_speed);
        printf("s =%6.2lfm\n", space);
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}


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

void Excersize_2_16(int solution, int answer)
{
    srand(time(NULL));
    double distance = 10000;
    distance = 10000 + rand() % (70 + 1) - 10;
    double distance1 = 8900;
    distance1 = 8900 + rand() % (50 + 1) - 8;
    double distance2 = distance - distance1;
    double average_speed = 5.49;
    average_speed = 5.49 + rand() % (0 + 1) - 0;
    double all_time = 30;
    all_time = 30 + rand() % (3 + 1) - 1;
    double minute = 27;
    minute = 27 + rand() % (2 + 1) - 1;
    double time = 0;
    double second = 60;
    double rate_of_change = 0.2;
    rate_of_change = 0.2 + rand() % (0 + 1) - 0;
    double time2 = (all_time - minute) * 60;
    double medium_speed1 = distance1 / (minute * second);
    double acceleration = rate_of_change * (second * second);
    double medium_speed2 = average_speed + rate_of_change * rate_of_change;
    double rate_time = rate_of_change * time2;
    double medium_speed3 = rate_time - average_speed;
    double average_time = average_speed * time2;
    double a = (rate_of_change / 2) - rate_of_change;
    double b = rate_of_change * time2;
    double c = -distance2 + (average_speed * time2);
    double d = 0;
    double e;
    double t;


    printf("\n\n");
    printf("2-16 \n");
    printf("어떤 육상 선수가 %6.2lfm를 %6.2lfmin이내에 주파하려고한다.\n", distance, all_time);
    printf("정확히 %6.2lfmin 지난 후에 달려야 할 거리가 %6.2lfm 남았다.\n", minute, distance2);
    printf("그런데 육상 선수가 원하는 시간 내에 주파하기 위해서는\n");
    printf("%6.2lfm/s^2의 가속도로 몇 초 동안 가속해야하는가?.\n", rate_of_change);

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================풀이================================\n");
        printf("x =%6.2lfm\n", distance);
        printf("구간1(x1) = %6.2lfm  구간2(x2) = %6.2lfm\n\n", distance1, distance2);
        printf("구간1(x1)\n");
        printf("관련공식: vavg = △x/△t\n");
        printf("vavg:평균속력, △x:이동한 거리, △t:걸린시간\n");
        printf("△x   = x - x0\n");
        printf("      = %6.2lfm -%6.2lfm\n\n", distance, distance2);
        printf("△t   = t - t0\n");
        printf("      = %6.2lfmin -%6.2lfmin\n\n", minute, time);
        printf("vavg  = (x - x0) / (t - t0)\n");
        printf("      = %6.2lfm / (%6.2lfmin * %6.2lfs)\n\n", distance1, minute, second);
        printf("구간2(x2)\n");
        printf("관련공식: v1 = v0t + 1/2at^2\n");
        printf("v1:나중속도, v0t:처음 속도, a:가속도, t:시간\n");
        printf("v1    =%6.2lfm/st +%6.2lfm/st^2 \n\n", average_speed, rate_of_change / 2);
        printf("관련공식: v2 = (v0 + at) * (%6.2lf- t)\n", time2);
        printf("v2:나중속도, v0:처음속도, a:가속도, t:시간, (%6.2lf-t):가속하지 않는 시간 \n", time2);
        printf("v2    = (%6.2lfm/s + %6.2lfm/s^2t) * (%6.2lf - t)\n", average_speed, rate_of_change, time2);
        printf("      = %6.2lf + %6.2lft -%6.2lft^2\n\n", average_time, (rate_of_change * time2) - average_speed, rate_of_change);
        printf("관련공식: v1 + v2 = x2\n");
        printf("x2    =%6.2lft^2 + %6.2lft +(%6.2lfm)\n", a, b, c, average_time - distance);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n");
        if (a == 0)
            printf("t=%5.2lf\n", -c / b);
        else
        {
            e = b * b - 4.0 * a * c;
            if (e >= 0)
            {
                printf("t=%5.2lfs\n", (-b + sqrt(e)) / ((2.0 * a)));
            }
            else
                printf("실근이 존재하지 않습니다\n");
        }
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}


void Excersize_2_18(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서

{
    srand(time(NULL));

    //  변수 선언 지역
    double velocity_m_s = 40.0 + rand() % (10 + 1) - 3;
    double velocity_f = 0;
    double a = 0.5 + rand() % (3 + 1);
    double v;
    double km = 1000;
    double hour = 3600;
    double distance_x;
    double t;
    double time_1 = 1.0;
    double x_4_distance;
    double x_5_distance;
    double time_4 = 4.0;
    double time_5 = 5.0;
    double delta_distance;
    double distance_x0 = 0;

    printf("\n\n");
    printf("2-18 \n");
    printf("%6.2lf km/h의 속력으로 달리는 자동차가 연료가 떨어져서 일정한 가속도%6.2lf m/s^2으로 감속되었다. \n\n", velocity_m_s, a);

    printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n\n");

    printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n\n");

    printf("(c) 자동차가 처음 %6.2lf s동안 이동한 거리와 다섯 번째 %6.2lf s 동안에 이동한 거리는 각각 얼마인가? \n\n", time_1, time_1);



    if (solution == SHOW)

    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n\n");

        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx\n");
        printf("Δx = x - x0, x : 나중위치, x0 : 처음위치\n");
        printf(" a : 가속도, v : 나중속도, v0 : 처음속도\n\n");


        v = velocity_m_s * km / hour;

        printf("(%6.2lf m/s)^2 - (%6.2lf km/h * %6.2lf m / %6.2lf s)^2 = 2 * (-%6.2lf m/s^2) * x\n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("x =(%6.2lf m/s)^2 - (%6.2lf m/s)^2 / 2 * (-%6.2lf m/s^2) \n", velocity_f, v, a);

        distance_x = -v * v / (2 * (-a));

        printf("  = %6.2lf m\n\n", distance_x);

    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("x = %6.2lf m\n\n", distance_x);

    }

    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n\n");

        // your code here
        printf("관련 공식은 v = v0 + a * t\n");
        printf("Δt = Δv / a, a : 가속도\n");
        printf("Δv = v - v0, v : 나중속도, v0 : 처음속도\n\n");

        printf("%6.2lf m/s = (%6.2lf km/h * %6.2lf m / %6.2lf s) + (-%6.2lf m/s^2) * t \n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("t = %6.2lf m/s - (%6.2lf km/h * %6.2lf m / %6.2lf s) / (-%6.2lf m/s^2) \n", velocity_f, velocity_m_s, km, hour, a);

        printf("  = %6.2lf m/s - %6.2lf m/s / (-%6.2lf m/s^2)\n", velocity_f, v, a);

        t = 0 - v / -a;

        printf("  =  %6.2lf s\n\n", t);



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);

    }
    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(c) 자동차가 처음 %6.2lf s동안 이동한 거리와 다섯 번째 %6.2lf s 동안에 이동한 거리는 각각 얼마인가? \n\n", time_1, time_1);

        // your code here   
        printf("관련 공식은 x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("Δt = Δv / a, v : 나중속도, v0 : 처음속도, a : 가속도\n");
        printf("Δx = x - x0, x : 나중위치, x0 : 처음위치\n");
        printf("x4 : 4초 동안 이동한 거리, x5 : 5초 동안 이동한 거리\n\n");

        distance_x = distance_x0 + v * time_1 + (-a / 2) * (time_1 * time_1);

        printf(" x =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2 \n", distance_x0, velocity_m_s, km, hour, time_1, a, time_1);
        printf("   = %6.2lf m\n\n", distance_x);


        printf("x4 =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", distance_x0, velocity_m_s, km, hour, time_4, a, time_4);

        x_4_distance = distance_x0 + v * time_4 + (-a / 2) * (time_4 * time_4);

        printf("   = %6.2lf m\n\n", x_4_distance);

        printf("x5 =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", distance_x0, velocity_m_s, km, hour, time_5, a, time_5);

        x_5_distance = distance_x0 + v * time_5 + (-a / 2) * (time_5 * time_5);

        printf("   = %6.2lf m\n\n", x_5_distance);

        printf("Δx = x5 - x4\n");
        delta_distance = distance_x0 + x_5_distance - x_4_distance;

        printf("    = %6.2lf m\n\n", delta_distance);



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("  x = %6.2lf m\n", distance_x);
        printf("Δx = %6.2lf m\n\n ", delta_distance);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

}



void Excersize_2_20(int solution, int answer)
{
    srand(time(NULL));
    double A_car_initial_speed = 24 + rand() % (12 + 1) - 6;         //초기 속도
    double B_car_initial_speed = 20 + rand() % (10 + 1) - 5;

    double A_car_stopping_time = 4 + rand() % (2 + 1) - 2;          //정차에 걸린시간
    double B_car_stopping_time = 5 + rand() % (2 + 1) - 1;

    double A_car_magnitude_of_acceleration;  //가속도
    double B_car_magnitude_of_acceleration;

    double young = 0;
    double v0 = 0;
    double v = 0; //나중속도

    double t = 0;
    double tb = 0;

    printf("\n");
    printf("2-20\n");
    printf(" %5.2lf m/s 로 달리던 자동차 A 와 %6.2lf m/s 로 달리던 자동차 B 가 동시에 브레이크를 \n", A_car_initial_speed, B_car_initial_speed);
    printf(" 밟아 일정하게 감속시켜서 자동차 A 는 %6.2lf s 만에 B 는 %6.2lf s 만에 정지하였다. \n\n", A_car_stopping_time, B_car_stopping_time);
    printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마인가? \n\n");
    printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초 후인가? \n\n");
    printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 멀리갔는가? \n\n");
    printf("(d) 자동차 B가 A와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인가? \n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        A_car_magnitude_of_acceleration = (v0 - A_car_initial_speed) / A_car_stopping_time;
        B_car_magnitude_of_acceleration = (v0 - B_car_initial_speed) / B_car_stopping_time;

        printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마인가? \n\n");

        printf("관련 공식은 a = Δv / Δt \n");
        printf("a: 가속도, Δv: 속도 변화량, Δt: 시간 변화량, aA: a자동차의 가속도, aB: B자동차의 가속도\n");
        printf("\n");

        printf("aA = Δv / Δt \n");
        printf("   = (%6.2lf m/s - %6.2lf m/s) / %6.2lf s\n", young, A_car_initial_speed, A_car_stopping_time);
        printf("   = %6.2lf m/s^2\n\n", A_car_magnitude_of_acceleration);

        printf("aB = Δv / Δt \n");
        printf("   = (%6.2lf m/s - %6.2lf m/s) / %6.2lf s\n", young, B_car_initial_speed, B_car_stopping_time);
        printf("   = %6.2lf m/s^2\n\n", B_car_magnitude_of_acceleration);
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("aA = %6.2lf m/s^2 \n\n", A_car_magnitude_of_acceleration);
        printf("aB = %6.2lf m/s^2 \n\n", B_car_magnitude_of_acceleration);


    }



    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        t = (A_car_initial_speed - B_car_initial_speed) / 2;

        printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초 후인가? \n\n");

        printf("관련 공식은 v = v0 + at \n");
        printf("v: 나중 속도, v0: 처음 속도, a: 가속도, t: 시간, vA: A자동차의 속도, vB: B자동차의 속도\n");
        printf("\n");

        printf("vA = v0 + aAt\n");
        printf("   = %6.2lf m/s + (%6.2lf m/s^2) * t\n\n", A_car_initial_speed, A_car_magnitude_of_acceleration);

        printf("vB = v0 + aBt\n");
        printf("   = %6.2lf m/s + (%6.2lf m/s^2) * t\n\n", B_car_initial_speed, B_car_magnitude_of_acceleration);

        printf("vA = vB\n");
        printf("%6.2lf m/s + (%6.2lf m/s^2) * t = %6.2lf m/s + (%6.2lf m/s^2) * t \n", A_car_initial_speed, A_car_magnitude_of_acceleration, B_car_initial_speed, B_car_magnitude_of_acceleration);
        printf("t = %6.2lf s\n\n", t);

    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);


    }


    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here


        printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 멀리갔는가? \n\n");

        printf("관련 공식은 x = v0 * t + (1/2) * a * t^2\n");
        printf("x: 거리, v0: 초기 속도 ,t: 시간 , a: 가속도, xA: A자동차가 간 거리, xB: B자동차가 간 거리\n\n");

        printf("xA = v0 * t + (1/2) * aA * t^2\n");
        printf("   = %6.2lf m/s * %6.2lf s  + (1/2) * (%6.2lf m/s^2) * %6.2lf s\n", A_car_initial_speed, A_car_stopping_time, A_car_magnitude_of_acceleration, A_car_stopping_time);
        printf("   = %6.2lf m\n\n", A_car_initial_speed * A_car_stopping_time + (1 / 2) * A_car_magnitude_of_acceleration * A_car_stopping_time);

        printf("xB = v0 * t + (1/2) * aB * t^2\n");
        printf("   = % 6.2lf m / s * %6.2lf s + (1 / 2) * (% 6.2lf m / s ^ 2) * %6.2lf s\n", B_car_initial_speed, B_car_stopping_time, B_car_magnitude_of_acceleration);
        printf("   = %6.2lf m\n\n", B_car_initial_speed * B_car_stopping_time + (1 / 2) * B_car_magnitude_of_acceleration * B_car_stopping_time);


    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");


        printf("xA = %6.2lf m\n\n", A_car_initial_speed * A_car_stopping_time + (1 / 2) * A_car_magnitude_of_acceleration * A_car_stopping_time);

        printf("xB = %6.2lf m\n\n", B_car_initial_speed * B_car_stopping_time + (1 / 2) * B_car_magnitude_of_acceleration * B_car_stopping_time);


    }

    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        tb = (v - B_car_initial_speed / B_car_magnitude_of_acceleration);

        printf("(d) 자동차 B가 A와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인가? \n\n");
        printf("관련 공식은 v = v0 + at \n");
        printf("v: 나중 속도, v0: 처음 속도, a: 가속도, t: 시간\n\n");

        printf("t = (v - v0) / a\n");
        printf("  = (%6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2\n", v, B_car_initial_speed, B_car_magnitude_of_acceleration);
        printf("  = %6.2lf s\n\n", tb);



    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lf s\n\n", tb);

        printf("=================================================================\n");
        printf("\n\n\n");
    }



}





void Excersize_2_22(int solution, int answer)
{
    srand(time(NULL));
    double f = 10;   //속도
    double t = 2 + rand() % (5 + 1);    //시간
    double g = 9.8;  //중력가속도
    double v0 = 10 + rand() % (9 + 1) - 4;  //초기 속도
    double V = 29.6 + rand() % (10 + 1) - 5; //나중 속도
    double y0 = 0;   //처음 높이
    double y = 39.6 + rand() % (4 + 1) - 2; //높이


    printf("\n\n");
    printf("2-22 \n");
    printf("어떤 높이에서 %6.2lf m/s의 속도로 연직 아래로 공을 던졌다.\n\n", v0);
    printf("(a) 공을 던진 후 %6.2f s 후의 속도를 구하라.\n\n", t);
    printf("(b) 그동안 낙하한 거리는 얼마인가?\n\n");

    if (solution == SHOW)
    {
        V = v0 + g * t;
        printf("\n\n");
        printf("=========================================   풀 이   =========================================\n\n");
        printf("(a) 공을 던진 후 %6.2f s 후의 속도를 구하라.\n\n", t);
        printf("관련 공식은  v = v0 + a * t \n");
        printf("v: 나중속도, v0: 처음속도, a: 가속도, t: 시간.\n\n");
        printf("중력 가속도는 아래 방향이므로 %6.2lf m/s^2 입니다.\n\n", -g);
        printf("v = (%6.2lf m/s) + ( %6.2lf m/s^2) * %6.2lf s\n", -v0, -g, t);
        printf("  = %6.2lf m/s\n\n", -V);

    }

    if (answer == SHOW)
    {

        printf("=========================================   정 답   =========================================\n\n");

        printf("v = %6.2lf m/s\n", -V);


    }


    if (solution == SHOW)
    {
        y = v0 * t + (g / 2 * t * t);
        printf("\n");
        printf("=========================================   풀 이   =========================================\n\n");
        printf("(b) 그동안 낙하한 거리는 얼마인가?\n\n");
        printf("관련 공식은  y = y0 + v0 * t + (1/2) * a * t^2\n");
        printf("y: 높이, y0: 처음높이, v0: 처음속도, a: 가속도, t: 시간.\n\n");
        printf("중력 가속도는 아래 방향이므로 %6.2lf m/s^2 입니다.\n\n", -g);
        printf("y = %6.2lf m + ((%6.2lf m/s) * %6.2lf s) + 1/2 * (%6.2lf m/s^2) * (%6.2lf s)^2\n", y0, -v0, t, -g, t); //각 항에 대응되는 값을 대입 한 후 문제 풀이
        printf("  = %6.2lf m\n\n", -y);

    }

    if (answer == SHOW)
    {

        printf("=========================================   정 답   =========================================\n\n");

        printf("y = %6.2lf m\n\n", -y); //중력가속도 공식으로 변환
        printf("=============================================================================================\n");
        printf("\n\n");
    }
}



void Excersize_2_24(int solution, int answer)
{
    srand(time(NULL));
    double height = 39.2 + rand() % (10 + 1) - 4;
    double second_velocity = 5 + rand() % (10 + 1) - 2;
    double gravitational_acceleration = 9.8;
    double x0 = 0;
    double v0 = 0;
    double t = 0;
    double x = 0;

    printf("\n");
    printf("2-24 \n");
    printf("높이가 %5.2lf m인 10층 옥상에서 \n", height);
    printf("공을 수평방향으로 초속도 %5.2lf m/s로 던졌다. \n\n", second_velocity);
    printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가? \n\n");
    printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가? \n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        t = sqrt(height / (1.0 / 2.0 * gravitational_acceleration));




        printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가?\n\n");

        printf("관련 공식은 x = x0 + v0 * t + (1/2) * a * t^2 \n");
        printf("v: 나중 속도, v0: 초기 속도, a: 가속도, t: 시간, g: 중력 가속도 \n\n");

        printf("g는 연직 아래 방향이므로 (-g)로 바뀌게 됩니다.\n\n");

        printf("x = x0 + v0 * t + (1/2) * a * t^2 \n");
        printf("%5.2lf m = (%5.2lf m) + (%5.2lf m) + t + (1/2) * (-%5.2lf m/s^2) * t^2 \n", height, x0, v0, gravitational_acceleration);
        printf("t^2     = (%5.2lf m - %5.2lf m - %5.2lf s) / ( 1/2 * -%5.2lf m/s^2 )\n", height, x0, v0, gravitational_acceleration);
        printf("        = -%5.2lf s \n\n", height / (1.0 / 2.0 * gravitational_acceleration));

        printf("t = √t^2\n");
        printf("  = %5.2lf s\n", t);

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");

        printf("공이 지면에 떨어지는 데 걸리는 시간(t) = %5.2lf s \n\n", t);
    }



    if (solution == SHOW)
    {
        printf("=========================   풀 이   =============================\n\n");
        // your code here
        x = second_velocity * t;
        printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가? \n\n");

        printf("관련 공식은 x = x0 + v0 * t  \n");
        printf("x: 수평거리, x0: 초기거리, v0: 초기 속도, t: 시간 \n\n");

        printf("x = x0 + v0 * t  \n");
        printf("  = %5.2lf + %5.2lf m/s * %5.2lf s \n", x0, second_velocity, t);
        printf("  = % 5.2lf m \n", x);

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   정 답   =============================\n\n");
        printf("수평으로 떨어지는 거리(x) = %5.2lf m \n\n", x);

        printf("=================================================================\n");
        printf("\n\n\n");
    }


}





void Excersize_2_26(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서

{
    srand(time(NULL));
    //  변수 선언 지역
    double height = 15.0 + rand() % (4 + 1) - 1;
    double height0 = 0;
    double velocity_m_s = 22.0 + rand() % (6 + 1) - 3;
    double g = 9.80;
    double time_1;
    double time_2;
    double velocity_f;
    double velocity_f_2;
    double delta_velocity1;
    double delta_velocity2;

    printf("\n\n");
    printf("2-26 \n");
    printf("돌을 %6.2lfm/s의 속력으로 수직하게 던져 올렸다. \n\n", velocity_m_s);

    printf("(a) 돌은 %6.2lfm에서 얼마나 빨리 운동하겠는가? \n\n", height);

    printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가? \n\n");


    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(a) 돌은 %6.2lfm에서 얼마나 빨리 운동하겠는가? \n\n", height);

        // your code here
        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy\n");
        printf(" a : 가속도, v : 나중속도, v0 : 처음속도\n");
        printf("Δy = y - y0, y : 나중높이, y0 : 처음높이\n");

        printf("중력 가속도는 아래 방향이므로 -%6.2lfm/s^2\n\n", g);

        printf("v^2 = (%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm\n", velocity_m_s, g, height);

        velocity_f_2 = (velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %6.2lfm/s\n", velocity_f_2);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);
        printf("v   = sqrt((%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm)\n", velocity_m_s, g, height);
        printf("    =%6.2lfm/s\n\n", velocity_f);


    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");
        printf("v =%6.2lfm/s\n\n", velocity_f);

    }

    if (solution == SHOW)

    {
        printf("=========================   풀 이   =============================\n\n");
        printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가? \n\n");

        // your code here

        printf("관련 공식은 v = v0 + a * t\n");
        printf("Δt = Δv / a, a : 중력가속도\n");
        printf("Δv = v - v0, v : 나중속도, v0 : 처음속도\n");
        printf("t1 = 돌이 올라가는 시간, t2 = 돌이 내려오는 시간\n\n");;
        printf(" v - v0= a * t1\n");
        printf("-v - v0= a * t2\n\n");


        time_1 = (velocity_f - velocity_m_s) / -g;
        time_2 = (-velocity_f - velocity_m_s) / -g;
        delta_velocity1 = velocity_f - velocity_m_s;
        delta_velocity2 = -velocity_f - velocity_m_s;

        printf(" %6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t1\n", velocity_f, velocity_m_s, g);
        printf("-%6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t2\n\n", velocity_f, velocity_m_s, g);

        printf("t1 =%6.2lfm/s  / (-%6.2lfm/s^2)\n", delta_velocity1, g);
        printf("   =%6.2lfs\n", time_1);

        printf("t2 = %6.2lfm/s / (-%6.2lfm/s^2)\n", delta_velocity2, g);
        printf("   =%6.2lfs\n\n", time_2);



    }

    if (answer == SHOW)

    {
        printf("=========================   정 답   =============================\n\n");

        printf("t1 =%6.2lfs\n", time_1);
        printf("t2 =%6.2lfs\n\n", time_2);


        printf("=================================================================\n");
        printf("\n\n\n");
    }

}



void Excersize_2_28(int solution, int answer)
{
    srand(time(NULL));

    double speed = 49 + rand() % (5 + 1) - 2;      // speed는 초기속도 v0.
    double g = 9.80;       // g는 gravitational_acceleration(중력 가속도).
    double time = 0;       // time은 총 걸린시간.
    double time1 = 0;      // time1은 최고 높이 도달 시간
    double y = 0;         // Δy 높이변화량.

    printf("\n\n");
    printf("2-28 \n");
    printf("초속도 49m/s로 연직 위로 던진 물체가 있다. \n\n");

    printf("(a) 이 물체가 올라갈 수 있는 최고 높이 H는 얼마인가? \n\n");

    printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n");


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   풀 이   =============================\n\n");

        printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n\n");

        printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy \n");
        printf("v:나중속도, v0:초기속도, a:가속도, Δy:높이변화량.\n\n");
        printf("최고 높이에서는 수직 방향속도가 0이므로 v = 0m/s 입니다. \n\n");
        printf("중력가속도는 아래 방향이므로 -9.80m/s^2 입니다. \n\n");

        printf("v^2 - v0^2 = 2 * a * Δy \n");
        printf("( 0m/s )^2 - (%6.2lfm/s )^2 = 2 * ( %6.2lfm/s^2 ) * (y - 0)\n", speed, -g);
        y = pow(speed, 2) / (g * 2);      //pow (a,b) = a^b
        printf("y = (%6.2lfm/s )^2 / ( 2 * %4.2lfm/s^2 ) = %6.2lfm\n\n", speed, g, y);
    }

    if (answer == SHOW)
    {
        printf("=========================   정 답   =============================\n\n");

        printf("최고 높이 H = %6.2lf m\n\n", y);
    }
    if (solution == SHOW)
    {

        printf("=========================   풀 이   =============================\n\n");

        printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");

        printf("관련 공식은 v = v0 + (a * t) \n");
        printf("v:나중속도, v0:초기속도, a:가속도, t:시간.\n\n");

        printf("v = v0 + (a * t) \n");
        printf("0m/s = %6.2lfm/s + (%6.2lfm/s^2 ) * t1\n", speed, -g);
        time1 = speed / g;
        printf("t1 =%6.2lfm/s /%6.2lfm/s^2 =%6.2lfs\n\n", speed, g, time1);

        printf("최고점에서 다시 지면으로 떨어지는데 걸리는 시간은 최고점까지 도달한 시간과 동일하므로\n");
        printf("물체가 다시 지면에 떨어지는 데 걸리는 시간은 t = t1 * 2 입니다.\n");
        time = time1 * 2;
        printf("t = t1 * 2 =%6.2lfs * 2 =%6.2lfs\n\n", time1, time);
    }

    if (answer == SHOW)
    {

        printf("=========================   정 답   =============================\n\n");

        printf("t = %6.2lfs\n\n", time);


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

    Excersize_2_2(Show_Solution, Answer);  //미래모빌리티공학과 홍경서 2023.05.21  미통과
    //Excersize_2_4(Show_Solution, Answer);  //미래모빌리티공학과 한석희 2023.05.21  통과
    //Excersize_2_6(Show_Solution, Answer);  //미래모빌리티공학과 한석희 2023.05.21  통과
    //Excersize_2_8(Show_Solution, Answer);  //미래모빌리티공학과 한창희 2023.05.21  통과
    //Excersize_2_10(Show_Solution, Answer); //미래모빌리티공학과 홍경서 2023.05.21  통과
    //Excersize_2_12(Show_Solution, Answer); //미래모빌리티공학과 한창희 2023.05.21  통과
    //Excersize_2_14(Show_Solution, Answer); //미래모빌리티공학과 홍경서 2023.05.21  통과
    //Excersize_2_16(Show_Solution, Answer); //미래모빌리티공학과 한창희 2023.05.21 미통과
    //Excersize_2_18(Show_Solution, Answer); //미래모빌리티공학과 신현서 2023.05.21 미통과 
    //Excersize_2_20(Show_Solution, Answer); //미래모빌리티공학과 송의준 2023.05.21 통과
    //Excersize_2_22(Show_Solution, Answer); //미래모빌리티공학과 서형준 2023.05.21 통과 
    //Excersize_2_24(Show_Solution, Answer); //미래모빌리티공학과 송의준 2023.05.21 미통과
    //Excersize_2_26(Show_Solution, Answer); //미래모빌리티공학과 신현서 2023.05.21 미통과
    //Excersize_2_28(Show_Solution, Answer); //미래모빌리티공학과 안성호 2023.05.21 미통과
}