#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{


	double w, h, area, perimeter;
	
	
	printf("W =");
	scanf("%lf", &w);
	printf("h =");
	scanf("%lf", &h);

	area = w * h;
	perimeter = 2 * (w + h);


	printf("�簢���� ����: %lf\n", area);
	printf("�簢���� �ѷ�: %lf\n", perimeter);

	return 0;


	/*double x, y, z;
	double sum, avg;

	printf("3���� �Ǽ��� �Է��Ͻÿ� :  ");
	scanf("%lf %lf %lf",&x,&y,&z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("�հ�=%.2lf\n", sum);
	printf("���=%.2lf\n", avg);

	return 0; 

	float radius; //���� ������
	float area;

	printf("�������� �Է��Ͻÿ�:");
	scanf("%f" & radius);
	area = 3.14 * radius * radius;
	printf("���Ǹ���:%f\n", area);
	
	int x;
	int y;
	int sum, diff, mui, div;

	printf("x=");
	scanf("%d", &x);
	printf("y=");
	scanf("%d", &y);

	sum = x + y;
	diff = x - y;
	mui = x * y;
	div = x / y;

	printf("�μ��� ��: %d \n", sum);
	printf("�μ��� ��: %d \n", diff);
	printf("�μ��� ��: %d \n", mui);
	printf("�μ��� ��: %d \n", div);
	*/
}