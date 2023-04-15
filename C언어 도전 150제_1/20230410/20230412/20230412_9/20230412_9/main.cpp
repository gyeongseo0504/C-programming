#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int n = 0;


	printf("숫자를 입력해주세요 :");
	scanf("%d", &n);

	if (n >= 0)
	{
		printf("%d 의 절댓값은 %d입니다.",n,abs(n));
	}
	else if (n < 0)
	{
		printf("%d 의 절댓값은 %d입니다.", n, abs(n));
	}
	
	printf("감사합니다.");
	return 0;
}