#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
//202315023 ȫ�漭

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int randint()
{
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", 10 + rand() % 81);
	}
	return 10 + rand() % 81;
}
int main(void)
{

	printf("%d", randint());

	return 0;
}

