#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	char divisor, divident, sum;
	int loop_count;

	divisor = 1.0;
	divident = 4.0;
	sum = 0.0;
	printf("�ݺ�Ƚ��:");
	scanf("%d", &loop_count);

	while (loop_count > 0)
	{
		sum = sum + divident / divisor;
		divident = -1.0 * divident;
		divisor = divisor + 2;
		loop_count--;
		

	}

	printf("���̰� = %f\n", sum);
	return 0;
}
