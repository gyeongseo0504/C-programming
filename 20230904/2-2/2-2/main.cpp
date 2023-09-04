#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>
#pragma warning(disable:4996)
struct Node {

	int a;
	double b;
};



int main()

{

	struct Node* print;
	FILE* fp;
	fp = fopen("data.txt", "wb");

	print = (struct Node*)malloc(sizeof(struct Node));
	print->a = 1;
	print->b = 3.14;
	fwrite((void*)print, sizeof(struct Node), 1, fp);

	fclose(fp);
	free(print);

}