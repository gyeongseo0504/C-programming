#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



void check_alpha(char text) 
{
	if (text >= 97 && text <= 122) 
	{
		printf("%c�� ���ĺ� �����Դϴ�.", text);
	}
}

int main(void) 
{
	char t;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &t);

	check_alpha(t);

	return 0;
}
