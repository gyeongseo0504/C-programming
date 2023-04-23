#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double v;

	while (1)
	{
		printf("실수값을 입력하시오: ");
		scanf("%lf", &v);

		if (v < 0.0)
			break;

		printf("%f의 제곱근은 %f입니다.\n",v , sqrt(v));
	}


	return 0;
}
