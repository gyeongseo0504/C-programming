#include<stdio.h>

int main(void)
{
	printf("결과값=%d\n", 2 + 3);
	printf("결과값=%d\n", 2 - 3);
	printf("결과값=%d\n", 2 * 3);
	printf("결과값=%f\n\n", 2.0 / 3.0);

	printf("9 x 1=%d\n", 9 * 1);
	printf("9 x 2=%d\n", 9 * 2);
	printf("9 x 3=%d\n", 9 * 3);
	printf("9 x 4=%d\n", 9 * 4);
	printf("9 x 5=%d\n\n", 9 * 5);
	
	
	/*int x = 5;
	int y = 2;
	printf("%d + %d = %d \n", x, y, x + y);
	printf("%d - %d = %d \n", x, y, x - y);
	printf("%d * %d = %d \n", x, y, x * y);
	printf("%d / %d = %d \n", x, y, x / y);*/


	int x;
	int y;
	int sum;

	x = 100;
	y = 200;

	sum = x + y;
	printf("두수의 합: %d", sum);

	return 0;
}