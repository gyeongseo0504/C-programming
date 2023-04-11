#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int temperature;
	int day;

	printf("일최고체감온도를 입력하세요:");
	scanf("%d", &temperature);

	printf("온도가 지속된 날을 입력하세요:");
	scanf("%d", &day);

	if (33 <= temperature and 2<= day)
	{
		printf("폭염 주의보 입니다 주의하시길 바랍니다.\n");
	}
	else if (35 <= temperature and 2 <= day)
	{
		printf("폭염 경보입니다 밖에 나갈떄 조심하시길 바랍니다.\n");
	}
	else
	{
		printf("폭염 주의보도 경보도 아닙니다 좋은하루 보내세요.\n");
	}
	return 0;
}