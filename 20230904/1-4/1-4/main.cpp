#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>
#define MAX 10
int main()
{
	FILE* fp;
	fp = fopen("Sunday.txt", "w");
	fputc('1', fp);
	fputc('2', fp);
	fputc('3', fp);
	fclose(fp);
}