#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() 
{
    double r = 0;
    double q1 = 0;
    double q2 = 0;
    double k = 0; 
    double fc = 0;

	k = 8.99 * pow(10, 9);

	printf("Fc를 구하기 위한 r ,q1 ,q2 를 차례대로 입력하세요. \n");
	scanf("%lf %lf %lf", &r, &q1, &q2);

	fc = k * q1 * q2 / (r * r);

	printf("fc = %.1lf N", fc);
		
	}