#define _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL)); //���� �߻��� �õ� ����

	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;     //�ݺ�����
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess < answer) //����ڰ� �Է��� ������ ���亸�� ������
			printf("HIGH \n");
		if (guess > answer) //����ڰ� �Է��� ������ ���亸�� ������
			printf("LOW \n");
	} while (guess != answer);

	printf("��ī��ī ! �����̿��� !!!!!!!!! �õ�Ƚ��=%d\n", tries);
	return 0;
}