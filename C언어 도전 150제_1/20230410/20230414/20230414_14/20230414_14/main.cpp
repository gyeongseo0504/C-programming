#define _CRT_SECURE_NO_WARNINGS
#include <stdbool.h>
#include <stdio.h>

void main()
{
	bool b = 5 < 10;
	bool a = 5 > 10;
	printf("%d\n\n", b);
	printf("%d\n\n", a);
	printf("bool 은 true와 false 두 가지 정보만 저장할 수 있는 1비트 자료형이다.");
}