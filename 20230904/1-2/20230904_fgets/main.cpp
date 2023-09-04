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
	FILE* fp;
	fp = fopen("hello.txt", "r");
	for (int i = 0; i < 3; i++)
	{
		fgets(hello, sizeof(hello), fp);
		printf("%s", hello);

	}
	fclose(fp);
}