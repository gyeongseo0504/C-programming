#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;
	printf("�����ڸ� �Է��ϼ���: ");
	scanf("%c", &letter);

	if (letter >= 'a' && letter <= 'z') {
		printf("�ҹ��� �Դϴ�.\n");
	}
	else if (letter >= 'A' && letter <= 'Z') {
		printf("�빮�� �Դϴ�.\n");
	}
	else {
		printf("�����ڰ� �ƴմϴ�.\n");
	}
}