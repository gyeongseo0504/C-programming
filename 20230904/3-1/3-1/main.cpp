#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

int main(void)
{
	FILE* fp1 = NULL, * fp2 = NULL;
	char fname1[100], fname[100];

	printf("첫번째 파일 이름: ");
	gets(fname1);
	fopen_s(&fp1, fname1, "rt");

	printf("두번째 파일 이름: ");
	gets(fname2);
	fopen_s(&fp1, fname2, "rt");

	if (fp1 = NULL || fp2 = NULL)
	{
		fprint(stderr, "파일 열기 오류\n");
		exit(1);
	}
	fclose(fp);

	return 0;
}