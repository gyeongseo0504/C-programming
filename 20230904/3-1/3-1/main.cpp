#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI�� ����ϱ� ���ؼ� �߰�
#include <math.h>
#include <time.h>

int main(void)
{
	FILE* fp1 = NULL, * fp2 = NULL;
	char fname1[100], fname[100];

	printf("ù��° ���� �̸�: ");
	gets(fname1);
	fopen_s(&fp1, fname1, "rt");

	printf("�ι�° ���� �̸�: ");
	gets(fname2);
	fopen_s(&fp1, fname2, "rt");

	if (fp1 = NULL || fp2 = NULL)
	{
		fprint(stderr, "���� ���� ����\n");
		exit(1);
	}
	fclose(fp);

	return 0;
}