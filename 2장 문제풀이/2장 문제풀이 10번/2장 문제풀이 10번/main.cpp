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


	double velocity = 90.0;
	double velocity_k_m = 110.0;
	double velocity_m_s = 25.0;
	double velocity_f = 30.56;
	double acceleration = 1.7;
	double time = 3.06;


	printf("\n\n");
	printf("2_10 \n");
	printf("��ӵ��ο��� � �ڵ����� �� %6.2lf m/s^2 �� ���ӵ��� �� �� �ִ�.\n\n", acceleration);

	printf("�� ������ %6.2lf km/h ���� %6.2lf km �� �����ϴ� �� �ɸ� �� �ð��� �󸶳� �ɱ�? \n\n", velocity, velocity_k_m);







	if (solution == SHOW)
	{



		printf("\n\n\n");
		printf("============================  Ǯ ��  =============================\n\n");

		printf("���� ������ ��ӵ���� �����Դϴ� \n");
		printf("���� ���� ��t=(v-v0)/a   �ð�(t) = (�����ӵ�(v) - �ʱ�ӵ�(v0)) / ���ӵ�(a) �Դϴ�.\n");
		printf("v�� �����ӵ�, v0�� �ʱ�ӵ� , a�� ���ӵ� , ��t�� �ð� ��ȭ�� �̴�. \n\n");

		velocity_m_s = velocity * 1000 / 3600;

		printf("������ �ش��� ���ӵ��� ���ϱ� ���ؼ��� km/h �� m/s (��)�� ������ ������� �մϴ�. \n");
		printf("1 km = 1000 m�� *1000 ��(��) ���ְ� h = 3600 s �̹Ƿ� /3600 s ��(��) ���ݴϴ�.\n");
		printf("�׷��Ƿ� �ʱ�ӵ��� %6.2lf km/h = %6.2lf * 1000 / 3600 m/s = %6.2lf m/s �̰�.\n", velocity, velocity, velocity_m_s);
		printf("���� �ӵ��� = %6.2lf km/h * 1000 / 3600 m/s = %6.2lf m/s �� �ٲ��ݴϴ�. \n\n", velocity_k_m, velocity_f);

		printf("���Ŀ� v, v0,a�� ���ϰ� �̸� Ȱ���Ͽ� ��t�� �����ָ� �˴ϴ�.\n");
		printf("v�� ���� �ӵ��� ���ӵ� �ڵ����� �ӵ��̹Ƿ� v = %6.2lf m/s �Դϴ�.\n", velocity_f);
		printf("v0�� �ʱ� �ӵ��� % 6.2lf km / h �޸��� �ڵ����� �ӵ��� v0 = % 6.2lf m / s �Դϴ�.\n", velocity, velocity_m_s);
		printf("a ��  %6.2lf m �޸��� �ڵ����� ���ӵ��� a = %6.2lf m �Դϴ�.\n", velocity, acceleration);


		printf("\n=================================================================\n");
		printf("\n\n\n");


	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		printf("���� ���� ��t=(v-v0)/a �� �����ϸ�\n");
		printf("��t = ( %6.2lf m/s - %6.2lf m/s) / %.2lf m/s^2 , ��t = %.2lf s \n", velocity_f, velocity_m_s, acceleration, time);
		printf("���� �� �ڵ����� %6.2lf km/h ���� %6.2lf km/h �� �����ϴµ����� \n", velocity, velocity_k_m);
		printf("��t=(v-v0)/a , %6.2lf s�� �ҿ�ȴ�. \n", time);

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