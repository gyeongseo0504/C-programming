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


	double v = 90.0;
	double v1 = 110.0;
	double v0 = 30.56;
	double v2 = 25.0;
	double a = 1.7;
	double t = 3.06;

	printf("\n\n");
	printf("2_10 \n");
	printf("��ӵ��ο��� � �ڵ����� �� %.2lf m/s^2 �� ���ӵ��� �� �� �ִ�.\n\n", a);

	printf("�� ������ %.2lf km/h ���� %.2lf km �� �����ϴ� �� �ɸ� �� �ð��� �󸶳� �ɱ�? \n\n", v, v1);







	if (solution == SHOW)
	{



		printf("\n\n\n");
		printf("=================================================================\n\n");

		printf("���� ������ a=(v-v0)/��t [�ð�=(�����ӵ�-�ʱ�ӵ�)/���ӵ�] �̴�.\n");
		printf("v=�����ӵ�, v0=�ʱ�ӵ� , a=���ӵ� , ��t=�ð� \n");
		printf("���ӵ��� �ʱ�ӵ� , �����ӵ��� ���Ϳ� �ʰ� �ȸ����� �����ݴϴ�. \n");
		printf("�ʱ� �ӵ� = %.2lf km/h = %.2lf m/s , ���� �ӵ� = %.2lf km/h = %.2lf m/s �� �ٲ��ݴϴ�. \n", v0, v2, v1, v);
		printf("�̶� ���ӵ��� ��ӵ���� ������ �� �����Ƿ� ������ ���� ��ӵ���� ������ ����մϴ�. \n");
		printf("a=(v-v0)/��t ���� t�� ���ؾߵǴ� t�� �Ѱ��ݴϴ�. \n");
		printf("�Ѱ��� ��t=(v-v0)/a ���Ŀ� �ٲ��� ���� ���� �� �ݴϴ� .\n");
		printf("��t = ( %.2lf m/s - %.2lf m/s) / %.2lf m/s^2 , ��t = %.2lf s \n", v0, v2, a, t);
		printf("�� �ڵ����� %.2lf km/h ���� %.2lf km/h �� �����ϴµ����� \n", v, v1, t);


		printf("\n=================================================================\n");
		printf("\n\n\n");


	}

	if (answer == SHOW)
	{
		printf("=========================   �� ��   =============================\n");

		printf("���� ��t=(v-v0)/a ���� %.2lf �� �ҿ�ȴ�. \n", t);

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