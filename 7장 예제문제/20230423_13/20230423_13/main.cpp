#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i = 0;

	do
	{
		printf("1---새로 만들기\n");
		printf("2---파일열기\n");
		printf("3---파일닫기\n");
		printf("하나를 선택하시요: \n");
		scanf("%d", &i);
	} while (i < 1 || i > 3);

	printf("선택된 메뉴=%d \n", i);
	return 0;
}