#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>
#define MAX 10
int main()
{
	int year = 2021;
	int old = 21;
	FILE* fp;
	fp = fopen("This year is 2021.txt", "w");
	fputs(fp, "This year is %d\nMy old id: %d",year,old);
	fclose(fp);
}