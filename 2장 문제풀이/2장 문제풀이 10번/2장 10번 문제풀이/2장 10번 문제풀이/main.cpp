#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
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
	printf("��ӵ��ο��� � �ڵ����� �� %6.2lf m/s^2 �� ���ӵ��� �� �� �ִ�.\n\n", acceleration);

	printf("�� ������ %6.2lf km/h ���� %6.2lf km/h �� �����ϴ� �� �ɸ� �� �ð��� �󸶳� �ɱ�? \n\n", frist_velocity, final_velocity);


	if (solution == SHOW)
	{
		final_change_of_velocity = change_of_velocity * 1000 / 3600;
		//change_of_velocity = ((final_velocity)-(frist_velocity));
		time = final_change_of_velocity / acceleration;

		printf("\n\n\n");
		printf("============================  Ǯ ��  =============================\n\n");

		printf("���� ������ ��ӵ���� ���� a=��v/��t �Դϴ� \n");
		printf("��v�� (�����ӵ�(v) - �ʱ�ӵ�(v0)) , a�� ���ӵ� , ��t�� �ð� ��ȭ�� �̴�. \n");

		printf("��v= (�����ӵ�) %6.2lf km/h - (�ʱ�ӵ�) %6.2lf km/h, ��v =  %6.2lf km/h . \n", final_velocity, frist_velocity , change_of_velocity);
		printf("������ �ش��� �ð��� ���ϱ� ���ؼ��� km/h �� m/s (��)�� ������ ������� �մϴ�. \n");
		printf("��v�� 1 km = 1000 m�� *1000 ��(��) ���ְ� h = 3600 s �̹Ƿ� /3600 s ��(��) ���ݴϴ�.\n");
		printf("�׷��Ƿ� ��v �� ������ �����ָ� %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s �̰�.\n", change_of_velocity, change_of_velocity, final_change_of_velocity);
		printf("��t = ( %6.2lf m/s - %6.2lf m/s) / %6.2lf m/s^2 = %6.2lf s \n", final_velocity, frist_velocity, acceleration, time);

		printf("\n=================================================================\n");
		printf("\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		printf("���� �� �ڵ����� %6.2lf km/h ���� %6.2lf km/h �� �����ϴµ����� �ɸ��� �ð��� \n", frist_velocity, final_velocity);
		printf("%6.2lf s�� �ҿ�ȴ�. \n", time);

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