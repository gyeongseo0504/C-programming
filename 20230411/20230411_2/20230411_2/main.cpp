#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int temperature;
	int day;

	printf("���ְ�ü���µ��� �Է��ϼ���:");
	scanf("%d", &temperature);

	printf("�µ��� ���ӵ� ���� �Է��ϼ���:");
	scanf("%d", &day);

	if (33 <= temperature and 2<= day)
	{
		printf("���� ���Ǻ� �Դϴ� �����Ͻñ� �ٶ��ϴ�.\n");
	}
	else if (35 <= temperature and 2 <= day)
	{
		printf("���� �溸�Դϴ� �ۿ� ������ �����Ͻñ� �ٶ��ϴ�.\n");
	}
	else
	{
		printf("���� ���Ǻ��� �溸�� �ƴմϴ� �����Ϸ� ��������.\n");
	}
	return 0;
}