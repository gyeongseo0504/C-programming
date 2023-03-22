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


	printf("사각형의 넓이: %lf\n", area);
	printf("사각형의 둘레: %lf\n", perimeter);

	return 0;


	/*double x, y, z;
	double sum, avg;

	printf("3개의 실수를 입력하시오 :  ");
	scanf("%lf %lf %lf",&x,&y,&z);

	sum = x + y + z;
	avg = sum / 3.0;

	printf("합계=%.2lf\n", sum);
	printf("평균=%.2lf\n", avg);

	return 0; 

	float radius; //원의 반지름
	float area;

	printf("반지름을 입력하시오:");
	scanf("%f" & radius);
	area = 3.14 * radius * radius;
	printf("원의면적:%f\n", area);
	
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

	printf("두수의 합: %d \n", sum);
	printf("두수의 차: %d \n", diff);
	printf("두수의 곱: %d \n", mui);
	printf("두수의 몫: %d \n", div);
	*/
}