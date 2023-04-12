#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int age;

	printf("나이를 입력해주세요:");
	scanf("%d", &age);

	if (age < 20)
	{
		printf("30%% 할인해드립니다.");


	}
	return 0;
}