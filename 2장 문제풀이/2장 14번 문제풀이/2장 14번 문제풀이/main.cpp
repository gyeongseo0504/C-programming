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



void Excersize_2_14(int solution, int answer)
{

	double initial_velocity = 0.0;
	double final_velocity = 30.0;
	double acceleration = 3.00;
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

		printf("���� ������ ��ӵ�� ������ v^2 - v0^2 = 2 * a * ��x �Դϴ�.\n");
		printf("v:���߼ӵ�, v0:ó���ӵ�, a:���ӵ�, ��x : �Ÿ���ȭ��   \n");
		printf("v^2 - v0^2 = (2 * a * ��x )�̶�� ������ ��x = v-v0/2*a �� �������ݴϴ�\n");
		printf("�Ÿ�(��x) = (�����ӵ�(v) - �ʱ�ӵ�(v0)) / (2*���ӵ�(a)) �� \n");
		printf("v0(�ʱ�ӵ�)�� ����ϱ� ���� �ӷ��̹Ƿ� %6.2lf  \n", initial_velocity);
		printf("v(�����ӵ�)�� �����ϱ� ���� �ӷ��̹Ƿ� %6.2lf   \n", final_velocity);
		printf("a(���ӵ�)�� %6.2lf ���� �����ϴ� �� �� �Է����ָ�  \n", acceleration);
		printf("��x = (%6.2lf m/s)^2 - (%6.2lf m/s)^2 =( 2 * %6.2lfm/s^2 ) �Դϴ�. \n", final_velocity, initial_velocity, acceleration);

		printf("\n=================================================================\n");
		printf("\n\n\n");
	}
	
	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n\n");

		printf("���� �� �����Ⱑ �̷� �ӵ��� �����ϱ� ���� ��x(Ȱ�ְŸ�)�� \n");
		printf("%6.2lf m�Դϴ�. \n\n", distance);

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



	Excersize_2_14(Show_Solution, Answer);


}