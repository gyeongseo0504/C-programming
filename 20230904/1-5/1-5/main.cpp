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
	fp = fopen("hello world.txt", "w");
	fputs("hello world", fp);
	fclose(fp);
}