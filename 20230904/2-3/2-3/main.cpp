#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>
#pragma warning(disable:4996)
struct Node 
{
	int a;
	double b;
};
int main()

{
	struct Node* open;
	FILE* fp;
	fp = fopen("data.txt", "rb"); 
	open = (struct Node*)malloc(sizeof(struct Node));
	fread((void*)open, sizeof(struct Node), 1, fp);

	printf("open->a = %d \n", open->a);
	printf("open->b = %.2lf \n", open->b);

	fclose(fp); 
	free(open); 

}