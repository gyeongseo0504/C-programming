#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>
#define MAX 10
int main()
{
	char hello[MAX];
	char one[10];
	char two[10];
	char three[10];
	FILE* fp;
	fp = fopen("hello.txt", "r");
	for (int i = 0; i < 3; i++)
	{
		fscanf(fp, "%s\n%s\n%s", one, two, three);
	}
	printf("frist line: %s\n", one);
	printf("second line: %s\n", two);
	printf("third line: %s", three);
	fclose(fp);

}