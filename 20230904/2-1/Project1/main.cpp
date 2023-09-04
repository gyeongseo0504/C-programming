#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>
#pragma warning(disable:4996)

int main()
{
	int a, b;
	int* data;
	FILE* fp;
	fp = fopen("data.txt", "r");

	if (fp != NULL)
	{
		fscanf(fp, "%d", &a);
		data = (int*)malloc(sizeof(int) * a);

		for (b = 0; b < a; b++)
		{
			fscanf(fp, "%d", &data[b]);
		}
		fclose(fp);

		for (b = 0; b < a; b++)
		{
			printf("data[%d] : %d\n", b, data[b]);
		}
		free(data);
	}//close if()
	else
	{
		printf("파일 입력받기 실패");
	}
}