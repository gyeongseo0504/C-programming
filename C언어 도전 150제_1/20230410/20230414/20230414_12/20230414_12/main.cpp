#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 2000000000;
	int j = 3000000000;

	printf("i:%d\n", i);
	printf("j:%d\n\n", j);
	printf("j는 int 의 표현가능 범위는 –2,147,483,648 ~ 2,147,483,647 까지 인데 j는 그 가능 범위를 넘어서 자신의 영역을 초과해서 0이 되어버린 현상인 오버플로 가 나타난것이다");

	return 0;

}