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
		printf("가속도는 시간이 변할  속도의 변화를 알려주는 것을 말합니다. \n");
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
		printf("%6.2lf km/h = (%6.2lf * 1000 / 3600 )m/s = %6.2lf m/s\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
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






void Excersize_2_12(int solution, int answer)
{
	int sec = 6;
	int V = 25;
	int V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("어떤 자동차가 %d s 동안에 %d m/s 에서 %d m/s로 가속된다.\n\n", sec, V, V0);
	printf("(a)이 자동차의 가속도는 얼마인가?  \n\n", acceleration);
	

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here

		printf("=================================================================\n");
	}

	printf("(b)이 자동차가 그동안 달린 거리는 얼마인가?  \n\n", distance);
}

void Excersize_2_14(int solution, int answer)
{

	double initial_velocity = 0.0;
	double final_velocity = 30.0;
	double acceleration = 3.00;
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
		printf("Δx = (%6.2lfm/s)^2 / (2 *%6.2lfm/s^2) = %6.2lfm \n", (final_velocity), acceleration, distance);

		printf("\n=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("필요한 활주거리 Δx = %6.2lf m \n\n", distance);

		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

void Excersize_2_16(int solution, int answer)
{
	double distance = 10000;
	double distance1 = 8900;
	double distance2 = 1100;
	double average_speed = 5.49;
	double minute = 27;
	double time = 0;
	double second = 60;
	double rate_of_change = 0.2;
	double time2 = 180;
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
	printf("어떤 육상 선수가 10000m를 30min이내에 주파하려고한다.\n");
	printf("정확히 27min 지난 후에 달려야 할 거리가 1100m 남았다.\n");
	printf("그런데 육상 선수가 원하는 시간 내에 주파하기 위해서는\n");
	printf("0.2m/s^2의 가속도로 몇 초 동안 가속해야하는가?.\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("===============================풀이================================\n");
		printf("x=%5.1lfm\n", distance);
		printf("구간1:%5.1lfm  구간2: %5.1lfm\n", distance1, distance2);
		printf("관련공식 v= △x/△t\n\n");
		printf("v=평균속력, △x:이동한 거리, △t:걸린시간\n\n");
		printf("구간1 평균속도: %5.1lfm/(%5.1lfmin * %5.1lfs)= %.2lfm/s\n", distance1, minute, second, medium_speed1);
		printf("관련공식: v=v0t + 1/2at^2\n\n");
		printf("v:거리, v0t:처음 속도, a:가속도, t:시간\n\n");
		printf("%5.2lfm/s +%5.2lfm/s^2 \n", average_speed, rate_of_change / 2);
		printf("관련공식: v = v0 + at\n\n");
		printf("v=나중속도, v0=처음속도, a=가속도, t=시간 \n\n");
		printf("등속도: %5.1lf + %5.2lft -%5.2lft^2\n\n", average_time, (rate_of_change * time2) - average_speed, rate_of_change);
		printf("구간2: %5.2lft^2 + % 5.2lft % 5.2lf = %5.2lfm\n", a, b, c, d);
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
				printf("가속해야하는 시간 t=%5.2lf\n", (-b + sqrt(e)) / ((2.0 * a)));
			}
			else
				printf("실근이 존재하지 않습니다\n");
		}
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}



void Excersize_2_22(int solution, int answer)
{
	double f = 10;   //속도
	double t = 2;    //시간
	double g = 9.8;  //중력가속도
	double v0 = 10;  //초기 속도 
	double V = 29.6; //나중 속도
	double y0 = 0;   //처음 높이
	double y = 39.6; //높이


	printf("========================================================================== \n");
	printf("=========================  Halla University ============================== \n");
	printf("=========================  Future Mobility  ============================== \n");
	printf("=========================  Phsics Trainer   ============================== \n");
	printf("=========================    Chapter 2      ============================== \n");
	printf("========================================================================== \n\n\n");

	printf("2-22 \n");
	printf("어떤 높이에서 %.2lf m/s의 속도로 연직 아래로 공을 던졌다.\n\n", f);
	printf("(a) 공을 던진 후 %.2f s 후의 속도를 구하라.\n\n", t);
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n");

	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================================   풀 이   =========================================\n\n");
		printf("(a) 공을 던진 후 %.2f s 후의 속도를 구하라.\n\n", t);
		printf("관련 공식은  V = v0 + a * t \n");
		printf("V: 나중속도, v0: 처음속도, a: 가속도, t: 시간.\n\n");
		printf("연직 아래방향이므로 중력가속도(g)와 처음속도(v0)는 음수값을 가지게 됩니다.\n\n");
		printf("V = (%.2lf m/s) + ( %.2lf m/s^2) * %.2lf s\n", -v0, -g, t);
		printf("  = %.2lf m/s\n\n", -V);

	}

	if (answer == SHOW)
	{

		printf("=========================================   정 답   =========================================\n\n");
		V = v0 + (g * t);
		printf("공을 던진 후 %.2f s 후의 속도 = %.2lfm/s\n", t, -V);


	}


	if (solution == SHOW)
	{
		printf("\n");
		printf("=========================================   풀 이   =========================================\n\n");
		printf("(b) 그동안 낙하한 거리는 얼마인가?\n\n");
		printf("관련 공식은  y = y0 + v0 * t + (1/2) * a * t^2\n");
		printf("y: 높이, y0: 처음높이, v0: 처음속도, a: 가속도, t: 시간.\n\n");
		printf("중력가속도는 아래 방향이므로 %.2lf m/s^2 입니다\n\n", -g);
		printf("y = %.2lf m + ((%.2lf m/s) * %.2lf s) + 1/2 * (%.2lf m/s^2) * (%.2lf s)^2\n", y0, -v0, t, -g, t); //각 항에 대응되는 값을 대입 한 후 문제 풀이 
		printf("  = %.2lf m\n\n", -y);

	}

	if (answer == SHOW)
	{

		printf("=========================================   정 답   =========================================\n\n");
		y = v0 * t + (g * t);
		printf("그동안 낙하한 거리 = %.2lf m\n\n", -y); //중력가속도 공식으로 변환
		printf("=============================================================================================\n");
		printf("\n\n");
	}
}

void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5;
	double gravitational_acceleration = 9.8;
	double x0 = 0;
	double v0 = 0;
	double t = 0;
	double x = 0;

	printf("\n\n");
	printf("2-24 \n");
	printf("높이가 %5.2lf m인 10층 옥상에서 \n", height);
	printf("공을 수평방향으로 초속도 %5.2lf m/s로 던졌다. \n\n", second_velocity);
	printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가? \n\n");
	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가? \n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		t = sqrt(height / (1.0 / 2.0 * gravitational_acceleration));

		printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가?\n\n");

		printf("관련 공식은 x = x0 + v0 * t + (1/2) * a * t^2 \n");
		printf("v: 나중 속도, v0: 초기 속도, a: 가속도, t: 시간. \n\n");

		printf("연직 아래방향이므로 중력가속도(g)와 처음속도(v0)는 음수값을 가지게 됩니다.\n\n");

		printf("%5.2lf m = (%5.2lf m) + (%5.2lf m) + t + 1/2 * %5.2lf m/s^2 * t^2 \n", height, x0, v0, gravitational_acceleration);
		printf("t^2 = %5.2lf m - %5.2lf m - %5.2lf sec / ( 1/2 x %5.2lf m/s^2 )\n", height, x0, v0, gravitational_acceleration);
		printf("t = %5.2lf sec \n", t);

		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");

		printf("걸린 시간 t = %5.2lf sec \n", t);

		printf("\n");
	}



	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		x = second_velocity * t;
		printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가? \n");

		printf("관련 공식은 x = x0 + v0 m/s x t sec \n");
		printf("x: 수평거리, x0: 초기거리, v0: 초기 속도, t: 시간. \n\n");

		printf("x = %5.2lf + %5.2lf m/s x %5.2lf sec \n", x0, second_velocity, t);
		printf("x = %5.2lf m \n", x);

		printf("\n");
	}
	if (answer == SHOW) {
		printf("=========================   정 답   =============================\n\n");
		printf("x를 계산합니다. \n");
		printf("x = %5.2lf m \n\n", x);
		printf("=================================================================\n");
		printf("\n\n\n");
	}


}

void Excersize_2_26(int solution, int answer) //한라대학교 미래모빌리티공학과 신현서

{
	//  변수 선언 지역
	double height = 15.0;
	double height0 = 0;
	double velocity_m_s = 22.0;
	double g = 9.80;
	double time_1;
	double time_2;
	double velocity_f;
	double delta_velocity1;
	double delta_velocity2;

	printf("\n\n");
	printf("2-26 \n");
	printf("돌을 %6.2lfm/s의 속력으로 수직하게 던져 올렸다. \n", velocity_m_s);

	printf("(a) 돌은 %6.2lfm에서 얼마나 빨리 운동하겠는가? \n\n", height);

	printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가? ");


	if (solution == SHOW)

	{
		printf("\n\n");
		printf("=========================   풀 이   =============================\n\n");
		// your code here
		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δy\n");
		printf("Δy : y - y0, y : %6.2lfm, y0 : %6.2lfm\n", height, height0);
		printf("a : %6.2lfm/s^2, v : 나중속도, v0 : %6.2lfm/s\n\n", g, velocity_m_s);
		printf("중력 가속도는 아래 방향이므로 -%6.2lfm/s^2입니다.\n\n", g);
		printf("v^2 = (%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm\n", velocity_m_s, g, height);


		velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);

		printf("    = %5.2lfm/s\n\n", velocity_f);

	}

	if (answer == SHOW)

	{
		printf("=========================   정 답   =============================\n\n");

		printf("v = %5.2lfm/s\n\n", velocity_f);

	}

	if (solution == SHOW)

	{
		printf("=========================   풀 이   =============================\n\n");
		// your code here

		printf("관련 공식은 v = v0 + a * t\n");
		printf("Δv : v - v0, v :%6.2lfm/s, v0 :%6.2lfm/s\n", velocity_f);
		printf("a:%6.2lfm/s^2, Δt : Δv / a\n\n", velocity_m_s, g);

		printf(" v - v0= a * t1\n");
		printf("-v - v0= a * t2\n\n");

		time_1 = (velocity_f - velocity_m_s) / -g;
		time_2 = (-velocity_f - velocity_m_s) / -g;
		delta_velocity1 = velocity_f - velocity_m_s;
		delta_velocity2 = -velocity_f - velocity_m_s;

		printf(" %6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t1\n", velocity_f, velocity_m_s, g);
		printf("-%6.2lfm/s - %6.2lfm/s = (-%6.2lfm/s^2) * t2\n\n", velocity_f, velocity_m_s, g);

		printf("t1 =%6.2lfm/s  / (-%6.2lfm/s^2) =%6.2lfs\n", delta_velocity1, g, time_1);
		printf("   = %5.2lfm/s\n", time_1);

		printf("t2 = %6.2lfm/s / (-%6.2lfm/s^2) =%6.2lfs\n", delta_velocity2, g, time_2);
		printf("   = %5.2lfm/s\n\n", time_2);



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
	double speed = 49;	   // speed는 초기속도 v0.
	double g = 9.80;       // g는 gravitational_acceleration(중력 가속도).
	double time = 0;       // time은 총 걸린시간.
	double time1 = 0;	   // time1은 최고 높이 도달 시간
	double y = 0;		   // Δy 높이변화량.

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

		printf("v^2 - v0^2 = 2 * a * y \n");
		printf("(0m/s)^2 - (49m/s^2)^2 = 2 * (-9.80m/s^2) * y\n");
		y = pow(speed, 2) / (g * 2);		//pow (a,b) = a^b
		printf("y = 49m/s / (2 * 9.8m/s^2) = %0.1lfm\n\n", y);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");

		printf("최고 높이 H = %0.1lf m\n\n", y);
	}
	if (solution == SHOW)
	{

		printf("=========================   풀 이   =============================\n\n");

		printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");

		printf("관련 공식은 v = v0 + (a * t) \n");
		printf("v:나중속도, v0:초기속도, a:가속도, t:시간.\n\n");

		printf("v = v0 + (a * t) \n");
		printf("0m/s = 49m/s - 9.80m/s^2 * t1\n");
		time1 = speed / g;
		printf("t1 = 49m/s / 9.80m/s^2 = %.0lfs\n\n", time1);

		printf("문제의 해답인 시간(time)을 구하기 위해서는 time 을 time1 * 2로 변환.\n");
		time = 2 * time1;
		printf("t = 2 * t1 = 2 * %.0lfs = %.0lfs\n\n", time1, time);
	}

	if (answer == SHOW)
	{

		printf("=========================   정 답   =============================\n\n");

		printf("물체가 다시 지면에 떨어지는데 걸리는 시간 t = %.0lfs\n\n", time);


		printf("=================================================================\n");
		printf("\n\n\n");
	}
}




