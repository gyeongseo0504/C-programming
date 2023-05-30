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
    printf("1992�⿡ ������ �ٸ����γ����� ������ �� 24ȸ �ø��� ������ ��⿡��\n");
    printf("�츮���� Ȳ���� ������ %6.2lf Km�� %6.2lf�ð� %6.2lf�� %6.2lf�ʿ� �پ� ����Ͽ��� .\n", velocity, time_h, time_m, time_s);
    printf("Ȳ���� ������ %6.2lfKm�� ��� �� �ʿ� �޸� �� �ΰ�? \n", x);

    if (solution == SHOW)
    {
        distance = velocity * 1000;
        time = x / speed;
        time_x = ((time_h * 3600) + (time_m * 60) + time_s);
        speed = distance / time_x;
        printf("\n\n");
        printf("============================  Ǯ ��  =============================\n\n");

        printf("���� ������ s = v / t �Դϴ� \n");
        printf("s�� �ӵ� ,v�� �ӷ�, t�� �ð� �Դϴ�. \n");
        printf("s =  %6.2lfKm / ( %6.2lfh %6.2lfm %6.2lfs ) \n\n", velocity, time_h, time_m, time_s);
        printf("km/h �� m/s (��)�� ������ ��ȯ�ϸ�. \n\n");
        printf("%6.2lfkm * 1000m/km = %6.2lfm\n(%6.2lfh %6.2lfm%6.2lfs) = (%6.2lfh * 3600s/h) + (%6.2lfm * 60s/m) + %6.2lfs = %6.2lfs\n\n", velocity, distance, time_h, time_m, time_s, time_h, time_m, time_s, time_x);
        printf("t = x / s \n");
        printf("  = %6.2lfm / %6.2lfm/s \n", x, speed);
        printf("  =%6.2lfs\n", time);


        printf("\n=================================================================\n");
        printf("\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
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
    printf("����� ���� �����ϰ� �ִ� ��ü�� ���ʹ������� ������� �� ��\n\n");
    printf("�̵��Ÿ��� �ð��� ���谡 �׸� P2-4�� ����. \n\n");
    printf("(a) ����Ͽ� %6.2lf s ���� ��ü�� ��ռӷ��� �� m/s�ΰ�? \n", t);
    printf("(b) ��� �� 5 s ���� �����ӷ��� �� m/s �ΰ�? \n\n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================    Ǯ ��   =============================\n\n");
        printf("(a) ����Ͽ� %6.2lf s ���� ��ü�� ��ռӷ��� �� m/s�ΰ�? \n", t);
        printf("���� ������ : vavg = ��x / ��t�Դϴ�. \n\n");
        printf("vavg : ��ռӷ�, ��x  : ����, ��t : �ð���ȭ��\n");
        printf("vavg = ��x / ��t \n\n");

        printf("     = (%6.2lfm  - 0m) / (%6.2lfs - 0s) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lf m/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        vavg = x / t;
        printf("vavg = % 6.2lf m/s \n\n", vavg);

        printf("=================================================================\n\n");
    }


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("(b) ��� �� 5 s ���� �����ӷ��� �� m/s �ΰ�? \n\n");
        printf("=========================    Ǯ ��   ============================\n");
        printf("���� ������ : v = ��x / ��t �Դϴ�. \n\n");
        printf("v : �����ӷ�, ��x : �Ÿ�, ��t : �ð�\n");
        printf("v = ��x / ��t\n\n");

        printf(" = (%6.2lfm - 0m) / (%6.2lfs - 0s) \n", m, s);
        v = m / s;
        printf("  = %6.2lf m/s\n\n", v);

    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");
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
    printf("�޸��� ������ %6.2lfm Ʈ�� �ѹ����� %6.2lfs ������.\n", x, t);
    printf("���� (a) ��ռӷ°� (b) ��ռӵ��� ���Ͽ���.\n\n");


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================    Ǯ ��   =============================\n\n");
        printf("(a) ������ ��� �ӷ��� ���ϴ� ����� ������ �����ϴ� \n\n");
        printf("���ð��� : vavg = ��x / ��t �Դϴ�.\n");
        printf("vavg : ��ռӷ�, ��x : �Ÿ�, ��t : �ð���ȭ��\n\n");

        printf("vavg = ��x / ��t\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n", x, t);
        vavg = x / t;
        printf("     = %6.2lfm/s\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        vavg = x / t;

        printf("vavg = %6.2lfm/s \n\n", vavg);

        printf("=================================================================\n\n");

        printf("\n\n\n");
    }


    if (solution == SHOW)
    {
        printf("\n\n\n");

        printf("=========================    Ǯ ��   ============================\n");
        printf("(b) ������ ��� �ӵ��� ���ϴ� ����� ������ �����ϴ�. \n\n");
        printf("���ð��� : vavg = ��d / ��t �Դϴ�. \n");
        printf("vavg : ��ռӵ�, ��d : ����, ��t : �ð���ȭ�� \n\n");

        printf("vavg = ��d / ��t\n\n");
        printf("     = (%6.2lfm) / (%6.2lfs) \n\n", d, t);
        vavg = d / t;
        printf("     = %6.2lf\n\n", vavg);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

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
    printf("���ӵ��� ���� +1�̶�� �ǹ̴�?\n");
    printf("(a):�ӵ��� ��ȭ�� ����.\n");
    printf("(b):�ӵ��� ���� Ŀ����.\n");
    printf("(c):�ӵ��� ���� �۾�����.\n");
    printf("(d):�ӵ��� �����ϴ�.\n\n");

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("���ӵ��� �ð��� ��ȭ�� ���� �ӵ��� ��ȭ�� �˷��ִ� ���� ���մϴ�. \n");
        printf("�׷��� ������ ���ӵ��� ���� +1�� ��� +1�� ��� �����Ѵٴ� ���� �� �� �ֽ��ϴ�. \n");
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
        printf("��:(b)\n");
        printf("���ӵ��� ���� +1�� ���� ��� ���̱� ������ �ӵ��� ���� �� �þ�� ���� �´�.\n");
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
    printf("��ӵ��ο��� � �ڵ����� �� %6.2lf m/s^2 �� ���ӵ��� �� �� �ִ�.\n", acceleration);
    printf("�� ������ %6.2lf km/h ���� %6.2lf km/h �� �����ϴ� �� �ɸ� �� �ð��� �󸶳� �ɱ�? \n\n", initial_velocity, final_velocity);

    if (solution == SHOW)
    {
        change_of_velocity = final_velocity - initial_velocity;
        final_change_of_velocity = change_of_velocity * 1000 / 3600;
        //change_of_velocity = ((final_velocity)-(frist_velocity));
        time = final_change_of_velocity / acceleration;

        printf("\n\n\n");
        printf("============================  Ǯ ��  =============================\n\n");

        printf("���� ������ a = ��v / ��t �Դϴ� \n");
        printf("a�� ���ӵ� ,��v�� �ӵ� ��ȭ�� , ��t�� �ð� ��ȭ�� �Դϴ�. \n\n");
        printf("��t = ( %6.2lf km/h - %6.2lf km/h) / %6.2lfm/s^2 . \n", final_velocity, initial_velocity, acceleration);
        printf("km/h �� m/s (��)�� ������ �����ݴϴ�. \n\n");
        printf("%6.2lf km/h = (%6.2lf * 1000 / 3600 )m/s = %6.2lf m/s\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
        printf("��t =  %6.2lf m/s / %6.2lf m/s^2\n", final_change_of_velocity, acceleration);

        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");


        printf("��t=  %6.2lf s \n", time);

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
    printf("� �ڵ����� %6.2lfs���ȿ� %6.2lfm/s���� %6.2lfm/s�� ���ӵȴ�.\n", time, distance2, distance1);
    printf("�� �ڵ����� ���ӵ��� ���ΰ�? �� �ڵ����� �׵��� �޸� �Ÿ��� ���ΰ�? \n");
    printf("��, ���ӵ��� �����ϴ�.\n");


    if (solution == SHOW)
    {


        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("���ð���: a=��v/��t\n");
        printf("a:���ӵ�, ��v:�ӵ��� ��ȭ��, ��t:�ɸ� �ð�\n");
        printf("��v = v -v0\n");
        printf("    = %6.2lfm/s - %6.2lfm/s\n\n", distance1, distance2);
        printf("��t = t - t0\n");
        printf("    = %6.2lfs - %6.2lfs\n\n", time, time1);
        printf("a   = (%6.2lfm/s -%6.2lfm/s) / (%6.2lfs -%6.2lfs)", distance1, distance2, time, time1);
        printf("\n\n");
        printf("���ð���: v^2-V0^2=2as\n");
        printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, s:�Ÿ�\n");
        printf("s   = ((%6.2lfm/s)^2 - (%6.2lfm/s)^2) / (2*%6.2lfm/s^2)\n", distance1, distance3, average_speed);
        printf("    = (%6.2lfm/s - %6.2lfm/s) /%6.2lfm/s^2\n", distance1 * distance1, distance3 * distance3, average_speed * 2);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
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
    printf("�����Ⱑ �̷��ϱ� ���ؼ��� �ӷ��� %6.2lf m/s �� �����ؾ� �Ѵ�.\n", final_velocity);
    printf("%6.2lf m/s^2 ���� �����ϰ� �����Ѵٸ� �̷� �ӵ��� �����ϱ� ���ؼ� ���� Ȱ�ְŸ��� �ʿ��Ѱ�? \n\n", acceleration);

    if (solution == SHOW)
    {
        distance = ((final_velocity * final_velocity) - (initial_velocity * initial_velocity)) / (2 * acceleration);

        printf("\n\n\n");
        printf("============================  Ǯ ��  =============================\n\n");

        printf("���� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
        printf("v:�����ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, ��x : �Ÿ���ȭ��   \n\n");
        printf("v^2 - v0^2 = 2 * a * ��x\n");
        printf("(%6.2lfm/s)^2 - (%6.2lfm/s)^2  =  2 * (%6.2lfm/s^2) * ��x   \n", final_velocity, initial_velocity, acceleration);
        printf("��x = (%6.2lfm/s)^2 / (2 *%6.2lfm/s^2) \n", (final_velocity), acceleration);
        printf("��x = %6.2lfm \n", distance);


        printf("\n=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("��x = %6.2lf m \n\n", distance);

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
    printf("� ���� ������ %6.2lfm�� %6.2lfmin�̳��� �����Ϸ����Ѵ�.\n", distance, all_time);
    printf("��Ȯ�� %6.2lfmin ���� �Ŀ� �޷��� �� �Ÿ��� %6.2lfm ���Ҵ�.\n", minute, distance2);
    printf("�׷��� ���� ������ ���ϴ� �ð� ���� �����ϱ� ���ؼ���\n");
    printf("%6.2lfm/s^2�� ���ӵ��� �� �� ���� �����ؾ��ϴ°�?.\n", rate_of_change);

    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("===============================Ǯ��================================\n");
        printf("x =%6.2lfm\n", distance);
        printf("����1(x1) = %6.2lfm  ����2(x2) = %6.2lfm\n\n", distance1, distance2);
        printf("����1(x1)\n");
        printf("���ð���: vavg = ��x/��t\n");
        printf("vavg:��ռӷ�, ��x:�̵��� �Ÿ�, ��t:�ɸ��ð�\n");
        printf("��x   = x - x0\n");
        printf("      = %6.2lfm -%6.2lfm\n\n", distance, distance2);
        printf("��t   = t - t0\n");
        printf("      = %6.2lfmin -%6.2lfmin\n\n", minute, time);
        printf("vavg  = (x - x0) / (t - t0)\n");
        printf("      = %6.2lfm / (%6.2lfmin * %6.2lfs)\n\n", distance1, minute, second);
        printf("����2(x2)\n");
        printf("���ð���: v1 = v0t + 1/2at^2\n");
        printf("v1:���߼ӵ�, v0t:ó�� �ӵ�, a:���ӵ�, t:�ð�\n");
        printf("v1    =%6.2lfm/st +%6.2lfm/st^2 \n\n", average_speed, rate_of_change / 2);
        printf("���ð���: v2 = (v0 + at) * (%6.2lf- t)\n", time2);
        printf("v2:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, t:�ð�, (%6.2lf-t):�������� �ʴ� �ð� \n", time2);
        printf("v2    = (%6.2lfm/s + %6.2lfm/s^2t) * (%6.2lf - t)\n", average_speed, rate_of_change, time2);
        printf("      = %6.2lf + %6.2lft -%6.2lft^2\n\n", average_time, (rate_of_change * time2) - average_speed, rate_of_change);
        printf("���ð���: v1 + v2 = x2\n");
        printf("x2    =%6.2lft^2 + %6.2lft +(%6.2lfm)\n", a, b, c, average_time - distance);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n");
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
                printf("�Ǳ��� �������� �ʽ��ϴ�\n");
        }
        printf("=================================================================\n");
        printf("\n\n\n");
    }
}


void Excersize_2_18(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������

{
    srand(time(NULL));

    //  ���� ���� ����
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
    printf("%6.2lf km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ �������� ������ ���ӵ�%6.2lf m/s^2���� ���ӵǾ���. \n\n", velocity_m_s, a);

    printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n\n");

    printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n\n");

    printf("(c) �ڵ����� ó�� %6.2lf s���� �̵��� �Ÿ��� �ټ� ��° %6.2lf s ���ȿ� �̵��� �Ÿ��� ���� ���ΰ�? \n\n", time_1, time_1);



    if (solution == SHOW)

    {
        srand(time(NULL));

        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n\n");

        // your code here
        printf("���� ������ v^2 - v0^2 = 2 * a * ��x\n");
        printf("��x = x - x0, x : ������ġ, x0 : ó����ġ\n");
        printf(" a : ���ӵ�, v : ���߼ӵ�, v0 : ó���ӵ�\n\n");


        v = velocity_m_s * km / hour;

        printf("(%6.2lf m/s)^2 - (%6.2lf km/h * %6.2lf m / %6.2lf s)^2 = 2 * (-%6.2lf m/s^2) * x\n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("x =(%6.2lf m/s)^2 - (%6.2lf m/s)^2 / 2 * (-%6.2lf m/s^2) \n", velocity_f, v, a);

        distance_x = -v * v / (2 * (-a));

        printf("  = %6.2lf m\n\n", distance_x);

    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("x = %6.2lf m\n\n", distance_x);

    }

    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n\n");

        // your code here
        printf("���� ������ v = v0 + a * t\n");
        printf("��t = ��v / a, a : ���ӵ�\n");
        printf("��v = v - v0, v : ���߼ӵ�, v0 : ó���ӵ�\n\n");

        printf("%6.2lf m/s = (%6.2lf km/h * %6.2lf m / %6.2lf s) + (-%6.2lf m/s^2) * t \n\n", velocity_f, velocity_m_s, km, hour, a);
        printf("t = %6.2lf m/s - (%6.2lf km/h * %6.2lf m / %6.2lf s) / (-%6.2lf m/s^2) \n", velocity_f, velocity_m_s, km, hour, a);

        printf("  = %6.2lf m/s - %6.2lf m/s / (-%6.2lf m/s^2)\n", velocity_f, v, a);

        t = 0 - v / -a;

        printf("  =  %6.2lf s\n\n", t);



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);

    }
    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(c) �ڵ����� ó�� %6.2lf s���� �̵��� �Ÿ��� �ټ� ��° %6.2lf s ���ȿ� �̵��� �Ÿ��� ���� ���ΰ�? \n\n", time_1, time_1);

        // your code here   
        printf("���� ������ x = x0 + v0 * t + 1/2 * a * t^2\n");
        printf("��t = ��v / a, v : ���߼ӵ�, v0 : ó���ӵ�, a : ���ӵ�\n");
        printf("��x = x - x0, x : ������ġ, x0 : ó����ġ\n");
        printf("x4 : 4�� ���� �̵��� �Ÿ�, x5 : 5�� ���� �̵��� �Ÿ�\n\n");

        distance_x = distance_x0 + v * time_1 + (-a / 2) * (time_1 * time_1);

        printf(" x =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) *%6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2 \n", distance_x0, velocity_m_s, km, hour, time_1, a, time_1);
        printf("   = %6.2lf m\n\n", distance_x);


        printf("x4 =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", distance_x0, velocity_m_s, km, hour, time_4, a, time_4);

        x_4_distance = distance_x0 + v * time_4 + (-a / 2) * (time_4 * time_4);

        printf("   = %6.2lf m\n\n", x_4_distance);

        printf("x5 =%6.2lf m + (%6.2lf km/h * %6.2lf m / %6.2lf s) * %6.2lf s + 1/2 * (-%6.2lf m/s^2) * (%6.2lf s)^2\n", distance_x0, velocity_m_s, km, hour, time_5, a, time_5);

        x_5_distance = distance_x0 + v * time_5 + (-a / 2) * (time_5 * time_5);

        printf("   = %6.2lf m\n\n", x_5_distance);

        printf("��x = x5 - x4\n");
        delta_distance = distance_x0 + x_5_distance - x_4_distance;

        printf("    = %6.2lf m\n\n", delta_distance);



    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");

        printf("  x = %6.2lf m\n", distance_x);
        printf("��x = %6.2lf m\n\n ", delta_distance);
        printf("=================================================================\n");
        printf("\n\n\n");
    }

}



void Excersize_2_20(int solution, int answer)
{
    srand(time(NULL));
    double A_car_initial_speed = 24 + rand() % (12 + 1) - 6;         //�ʱ� �ӵ�
    double B_car_initial_speed = 20 + rand() % (10 + 1) - 5;

    double A_car_stopping_time = 4 + rand() % (2 + 1) - 2;          //������ �ɸ��ð�
    double B_car_stopping_time = 5 + rand() % (2 + 1) - 1;

    double A_car_magnitude_of_acceleration;  //���ӵ�
    double B_car_magnitude_of_acceleration;

    double young = 0;
    double v0 = 0;
    double v = 0; //���߼ӵ�

    double t = 0;
    double tb = 0;

    printf("\n");
    printf("2-20\n");
    printf(" %5.2lf m/s �� �޸��� �ڵ��� A �� %6.2lf m/s �� �޸��� �ڵ��� B �� ���ÿ� �극��ũ�� \n", A_car_initial_speed, B_car_initial_speed);
    printf(" ��� �����ϰ� ���ӽ��Ѽ� �ڵ��� A �� %6.2lf s ���� B �� %6.2lf s ���� �����Ͽ���. \n\n", A_car_stopping_time, B_car_stopping_time);
    printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ΰ�? \n\n");
    printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� �� ���ΰ�? \n\n");
    printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ָ����°�? \n\n");
    printf("(d) �ڵ��� B�� A�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���ΰ�? \n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        A_car_magnitude_of_acceleration = (v0 - A_car_initial_speed) / A_car_stopping_time;
        B_car_magnitude_of_acceleration = (v0 - B_car_initial_speed) / B_car_stopping_time;

        printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ΰ�? \n\n");

        printf("���� ������ a = ��v / ��t \n");
        printf("a: ���ӵ�, ��v: �ӵ� ��ȭ��, ��t: �ð� ��ȭ��, aA: a�ڵ����� ���ӵ�, aB: B�ڵ����� ���ӵ�\n");
        printf("\n");

        printf("aA = ��v / ��t \n");
        printf("   = (%6.2lf m/s - %6.2lf m/s) / %6.2lf s\n", young, A_car_initial_speed, A_car_stopping_time);
        printf("   = %6.2lf m/s^2\n\n", A_car_magnitude_of_acceleration);

        printf("aB = ��v / ��t \n");
        printf("   = (%6.2lf m/s - %6.2lf m/s) / %6.2lf s\n", young, B_car_initial_speed, B_car_stopping_time);
        printf("   = %6.2lf m/s^2\n\n", B_car_magnitude_of_acceleration);
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");

        printf("aA = %6.2lf m/s^2 \n\n", A_car_magnitude_of_acceleration);
        printf("aB = %6.2lf m/s^2 \n\n", B_car_magnitude_of_acceleration);


    }



    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        t = (A_car_initial_speed - B_car_initial_speed) / 2;

        printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� �� ���ΰ�? \n\n");

        printf("���� ������ v = v0 + at \n");
        printf("v: ���� �ӵ�, v0: ó�� �ӵ�, a: ���ӵ�, t: �ð�, vA: A�ڵ����� �ӵ�, vB: B�ڵ����� �ӵ�\n");
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
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s\n\n", t);


    }


    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here


        printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ָ����°�? \n\n");

        printf("���� ������ x = v0 * t + (1/2) * a * t^2\n");
        printf("x: �Ÿ�, v0: �ʱ� �ӵ� ,t: �ð� , a: ���ӵ�, xA: A�ڵ����� �� �Ÿ�, xB: B�ڵ����� �� �Ÿ�\n\n");

        printf("xA = v0 * t + (1/2) * aA * t^2\n");
        printf("   = %6.2lf m/s * %6.2lf s  + (1/2) * (%6.2lf m/s^2) * %6.2lf s\n", A_car_initial_speed, A_car_stopping_time, A_car_magnitude_of_acceleration, A_car_stopping_time);
        printf("   = %6.2lf m\n\n", A_car_initial_speed * A_car_stopping_time + (1 / 2) * A_car_magnitude_of_acceleration * A_car_stopping_time);

        printf("xB = v0 * t + (1/2) * aB * t^2\n");
        printf("   = % 6.2lf m / s * %6.2lf s + (1 / 2) * (% 6.2lf m / s ^ 2) * %6.2lf s\n", B_car_initial_speed, B_car_stopping_time, B_car_magnitude_of_acceleration);
        printf("   = %6.2lf m\n\n", B_car_initial_speed * B_car_stopping_time + (1 / 2) * B_car_magnitude_of_acceleration * B_car_stopping_time);


    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");


        printf("xA = %6.2lf m\n\n", A_car_initial_speed * A_car_stopping_time + (1 / 2) * A_car_magnitude_of_acceleration * A_car_stopping_time);

        printf("xB = %6.2lf m\n\n", B_car_initial_speed * B_car_stopping_time + (1 / 2) * B_car_magnitude_of_acceleration * B_car_stopping_time);


    }

    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        tb = (v - B_car_initial_speed / B_car_magnitude_of_acceleration);

        printf("(d) �ڵ��� B�� A�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���ΰ�? \n\n");
        printf("���� ������ v = v0 + at \n");
        printf("v: ���� �ӵ�, v0: ó�� �ӵ�, a: ���ӵ�, t: �ð�\n\n");

        printf("t = (v - v0) / a\n");
        printf("  = (%6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2\n", v, B_car_initial_speed, B_car_magnitude_of_acceleration);
        printf("  = %6.2lf s\n\n", tb);



    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");

        printf("t = %6.2lf s\n\n", tb);

        printf("=================================================================\n");
        printf("\n\n\n");
    }



}





void Excersize_2_22(int solution, int answer)
{
    srand(time(NULL));
    double f = 10;   //�ӵ�
    double t = 2 + rand() % (5 + 1);    //�ð�
    double g = 9.8;  //�߷°��ӵ�
    double v0 = 10 + rand() % (9 + 1) - 4;  //�ʱ� �ӵ�
    double V = 29.6 + rand() % (10 + 1) - 5; //���� �ӵ�
    double y0 = 0;   //ó�� ����
    double y = 39.6 + rand() % (4 + 1) - 2; //����


    printf("\n\n");
    printf("2-22 \n");
    printf("� ���̿��� %6.2lf m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", v0);
    printf("(a) ���� ���� �� %6.2f s ���� �ӵ��� ���϶�.\n\n", t);
    printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n\n");

    if (solution == SHOW)
    {
        V = v0 + g * t;
        printf("\n\n");
        printf("=========================================   Ǯ ��   =========================================\n\n");
        printf("(a) ���� ���� �� %6.2f s ���� �ӵ��� ���϶�.\n\n", t);
        printf("���� ������  v = v0 + a * t \n");
        printf("v: ���߼ӵ�, v0: ó���ӵ�, a: ���ӵ�, t: �ð�.\n\n");
        printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� %6.2lf m/s^2 �Դϴ�.\n\n", -g);
        printf("v = (%6.2lf m/s) + ( %6.2lf m/s^2) * %6.2lf s\n", -v0, -g, t);
        printf("  = %6.2lf m/s\n\n", -V);

    }

    if (answer == SHOW)
    {

        printf("=========================================   �� ��   =========================================\n\n");

        printf("v = %6.2lf m/s\n", -V);


    }


    if (solution == SHOW)
    {
        y = v0 * t + (g / 2 * t * t);
        printf("\n");
        printf("=========================================   Ǯ ��   =========================================\n\n");
        printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n\n");
        printf("���� ������  y = y0 + v0 * t + (1/2) * a * t^2\n");
        printf("y: ����, y0: ó������, v0: ó���ӵ�, a: ���ӵ�, t: �ð�.\n\n");
        printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� %6.2lf m/s^2 �Դϴ�.\n\n", -g);
        printf("y = %6.2lf m + ((%6.2lf m/s) * %6.2lf s) + 1/2 * (%6.2lf m/s^2) * (%6.2lf s)^2\n", y0, -v0, t, -g, t); //�� �׿� �����Ǵ� ���� ���� �� �� ���� Ǯ��
        printf("  = %6.2lf m\n\n", -y);

    }

    if (answer == SHOW)
    {

        printf("=========================================   �� ��   =========================================\n\n");

        printf("y = %6.2lf m\n\n", -y); //�߷°��ӵ� �������� ��ȯ
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
    printf("���̰� %5.2lf m�� 10�� ���󿡼� \n", height);
    printf("���� ����������� �ʼӵ� %5.2lf m/s�� ������. \n\n", second_velocity);
    printf("(a) ���� ���鿡 �������� �� �ɸ��� �ð��� ���ΰ�? \n\n");
    printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�? \n");

    if (solution == SHOW)
    {
        printf("\n");
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        t = sqrt(height / (1.0 / 2.0 * gravitational_acceleration));




        printf("(a) ���� ���鿡 �������� �� �ɸ��� �ð��� ���ΰ�?\n\n");

        printf("���� ������ x = x0 + v0 * t + (1/2) * a * t^2 \n");
        printf("v: ���� �ӵ�, v0: �ʱ� �ӵ�, a: ���ӵ�, t: �ð�, g: �߷� ���ӵ� \n\n");

        printf("g�� ���� �Ʒ� �����̹Ƿ� (-g)�� �ٲ�� �˴ϴ�.\n\n");

        printf("x = x0 + v0 * t + (1/2) * a * t^2 \n");
        printf("%5.2lf m = (%5.2lf m) + (%5.2lf m) + t + (1/2) * (-%5.2lf m/s^2) * t^2 \n", height, x0, v0, gravitational_acceleration);
        printf("t^2     = (%5.2lf m - %5.2lf m - %5.2lf s) / ( 1/2 * -%5.2lf m/s^2 )\n", height, x0, v0, gravitational_acceleration);
        printf("        = -%5.2lf s \n\n", height / (1.0 / 2.0 * gravitational_acceleration));

        printf("t = ��t^2\n");
        printf("  = %5.2lf s\n", t);

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");

        printf("���� ���鿡 �������� �� �ɸ��� �ð�(t) = %5.2lf s \n\n", t);
    }



    if (solution == SHOW)
    {
        printf("=========================   Ǯ ��   =============================\n\n");
        // your code here
        x = second_velocity * t;
        printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�? \n\n");

        printf("���� ������ x = x0 + v0 * t  \n");
        printf("x: ����Ÿ�, x0: �ʱ�Ÿ�, v0: �ʱ� �ӵ�, t: �ð� \n\n");

        printf("x = x0 + v0 * t  \n");
        printf("  = %5.2lf + %5.2lf m/s * %5.2lf s \n", x0, second_velocity, t);
        printf("  = % 5.2lf m \n", x);

        printf("\n");
    }
    if (answer == SHOW) {
        printf("=========================   �� ��   =============================\n\n");
        printf("�������� �������� �Ÿ�(x) = %5.2lf m \n\n", x);

        printf("=================================================================\n");
        printf("\n\n\n");
    }


}





void Excersize_2_26(int solution, int answer) //�Ѷ���б� �̷������Ƽ���а� ������

{
    srand(time(NULL));
    //  ���� ���� ����
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
    printf("���� %6.2lfm/s�� �ӷ����� �����ϰ� ���� �÷ȴ�. \n\n", velocity_m_s);

    printf("(a) ���� %6.2lfm���� �󸶳� ���� ��ϰڴ°�? \n\n", height);

    printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�? \n\n");


    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(a) ���� %6.2lfm���� �󸶳� ���� ��ϰڴ°�? \n\n", height);

        // your code here
        printf("���� ������ v^2 - v0^2 = 2 * a * ��y\n");
        printf(" a : ���ӵ�, v : ���߼ӵ�, v0 : ó���ӵ�\n");
        printf("��y = y - y0, y : ���߳���, y0 : ó������\n");

        printf("�߷� ���ӵ��� �Ʒ� �����̹Ƿ� -%6.2lfm/s^2\n\n", g);

        printf("v^2 = (%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm\n", velocity_m_s, g, height);

        velocity_f_2 = (velocity_m_s * velocity_m_s + 2 * (-g) * height);

        printf("    = %6.2lfm/s\n", velocity_f_2);

        velocity_f = sqrt(velocity_m_s * velocity_m_s + 2 * (-g) * height);
        printf("v   = sqrt((%6.2lfm/s)^2 + 2 * (-%6.2lfm/s^2) * %6.2lfm)\n", velocity_m_s, g, height);
        printf("    =%6.2lfm/s\n\n", velocity_f);


    }

    if (answer == SHOW)

    {
        printf("=========================   �� ��   =============================\n\n");
        printf("v =%6.2lfm/s\n\n", velocity_f);

    }

    if (solution == SHOW)

    {
        printf("=========================   Ǯ ��   =============================\n\n");
        printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�? \n\n");

        // your code here

        printf("���� ������ v = v0 + a * t\n");
        printf("��t = ��v / a, a : �߷°��ӵ�\n");
        printf("��v = v - v0, v : ���߼ӵ�, v0 : ó���ӵ�\n");
        printf("t1 = ���� �ö󰡴� �ð�, t2 = ���� �������� �ð�\n\n");;
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
        printf("=========================   �� ��   =============================\n\n");

        printf("t1 =%6.2lfs\n", time_1);
        printf("t2 =%6.2lfs\n\n", time_2);


        printf("=================================================================\n");
        printf("\n\n\n");
    }

}



void Excersize_2_28(int solution, int answer)
{
    srand(time(NULL));

    double speed = 49 + rand() % (5 + 1) - 2;      // speed�� �ʱ�ӵ� v0.
    double g = 9.80;       // g�� gravitational_acceleration(�߷� ���ӵ�).
    double time = 0;       // time�� �� �ɸ��ð�.
    double time1 = 0;      // time1�� �ְ� ���� ���� �ð�
    double y = 0;         // ��y ���̺�ȭ��.

    printf("\n\n");
    printf("2-28 \n");
    printf("�ʼӵ� 49m/s�� ���� ���� ���� ��ü�� �ִ�. \n\n");

    printf("(a) �� ��ü�� �ö� �� �ִ� �ְ� ���� H�� ���ΰ�? \n\n");

    printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n");


    if (solution == SHOW)
    {
        printf("\n\n\n");
        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n\n");

        printf("���� ������ v^2 - v0^2 = 2 * a * ��y \n");
        printf("v:���߼ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, ��y:���̺�ȭ��.\n\n");
        printf("�ְ� ���̿����� ���� ����ӵ��� 0�̹Ƿ� v = 0m/s �Դϴ�. \n\n");
        printf("�߷°��ӵ��� �Ʒ� �����̹Ƿ� -9.80m/s^2 �Դϴ�. \n\n");

        printf("v^2 - v0^2 = 2 * a * ��y \n");
        printf("( 0m/s )^2 - (%6.2lfm/s )^2 = 2 * ( %6.2lfm/s^2 ) * (y - 0)\n", speed, -g);
        y = pow(speed, 2) / (g * 2);      //pow (a,b) = a^b
        printf("y = (%6.2lfm/s )^2 / ( 2 * %4.2lfm/s^2 ) = %6.2lfm\n\n", speed, g, y);
    }

    if (answer == SHOW)
    {
        printf("=========================   �� ��   =============================\n\n");

        printf("�ְ� ���� H = %6.2lf m\n\n", y);
    }
    if (solution == SHOW)
    {

        printf("=========================   Ǯ ��   =============================\n\n");

        printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n\n");

        printf("���� ������ v = v0 + (a * t) \n");
        printf("v:���߼ӵ�, v0:�ʱ�ӵ�, a:���ӵ�, t:�ð�.\n\n");

        printf("v = v0 + (a * t) \n");
        printf("0m/s = %6.2lfm/s + (%6.2lfm/s^2 ) * t1\n", speed, -g);
        time1 = speed / g;
        printf("t1 =%6.2lfm/s /%6.2lfm/s^2 =%6.2lfs\n\n", speed, g, time1);

        printf("�ְ������� �ٽ� �������� �������µ� �ɸ��� �ð��� �ְ������� ������ �ð��� �����ϹǷ�\n");
        printf("��ü�� �ٽ� ���鿡 �������� �� �ɸ��� �ð��� t = t1 * 2 �Դϴ�.\n");
        time = time1 * 2;
        printf("t = t1 * 2 =%6.2lfs * 2 =%6.2lfs\n\n", time1, time);
    }

    if (answer == SHOW)
    {

        printf("=========================   �� ��   =============================\n\n");

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

    Excersize_2_2(Show_Solution, Answer);  //�̷������Ƽ���а� ȫ�漭 2023.05.21  �����
    //Excersize_2_4(Show_Solution, Answer);  //�̷������Ƽ���а� �Ѽ��� 2023.05.21  ���
    //Excersize_2_6(Show_Solution, Answer);  //�̷������Ƽ���а� �Ѽ��� 2023.05.21  ���
    //Excersize_2_8(Show_Solution, Answer);  //�̷������Ƽ���а� ��â�� 2023.05.21  ���
    //Excersize_2_10(Show_Solution, Answer); //�̷������Ƽ���а� ȫ�漭 2023.05.21  ���
    //Excersize_2_12(Show_Solution, Answer); //�̷������Ƽ���а� ��â�� 2023.05.21  ���
    //Excersize_2_14(Show_Solution, Answer); //�̷������Ƽ���а� ȫ�漭 2023.05.21  ���
    //Excersize_2_16(Show_Solution, Answer); //�̷������Ƽ���а� ��â�� 2023.05.21 �����
    //Excersize_2_18(Show_Solution, Answer); //�̷������Ƽ���а� ������ 2023.05.21 ����� 
    //Excersize_2_20(Show_Solution, Answer); //�̷������Ƽ���а� ������ 2023.05.21 ���
    //Excersize_2_22(Show_Solution, Answer); //�̷������Ƽ���а� ������ 2023.05.21 ��� 
    //Excersize_2_24(Show_Solution, Answer); //�̷������Ƽ���а� ������ 2023.05.21 �����
    //Excersize_2_26(Show_Solution, Answer); //�̷������Ƽ���а� ������ 2023.05.21 �����
    //Excersize_2_28(Show_Solution, Answer); //�̷������Ƽ���а� �ȼ�ȣ 2023.05.21 �����
}