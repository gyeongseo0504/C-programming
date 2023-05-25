#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



void check_alpha(char text) 
{
	if (text >= 97 && text <= 122) 
	{
		printf("%c는 알파벳 문자입니다.", text);
	}
}

int main(void) 
{
	char t;
	printf("문자를 입력하시오: ");
	scanf("%c", &t);

	check_alpha(t);

	return 0;
}
