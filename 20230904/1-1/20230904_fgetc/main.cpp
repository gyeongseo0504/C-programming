#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

int main()
{
	FILE* fp;
	fp = fopen("hello.txt", "r");
	for (int i = 0; i < 20; i++)
	{
		char a = fgetc(fp);
		printf("%c\n", a);
	}
	fclose(fp);
}