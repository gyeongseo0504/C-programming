#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	b = a / 10;      //a를 10으로 나눈값이 십의 자리이고 
	c = a % 10;     //a의 나머지 값이 일의 자리의 숫자이다 

	printf("십의자리 : %d\n일의자리 : %d", b, c);
	//십의 자리 숫자를 10으로 나눈값으로 일의 자리 숫자에 나머지 값을 입력 

	return 0;
}