#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	int height, ft;
	double inch;
	//Ű�� ��Ʈ�� ���������� ���ϰ�  ��ġ�� �Ҽ������� ���ϴϱ� 

	printf("Ű�� �Է��ϼ���(cm): ");
	scanf("%d", &height);

	ft = (height / 2.54 / 12); 
	//cm�� 2.54�� ������ ��ġ, ��ġ�� 12�� ������ ��Ʈ�� �ȴ�
	inch = (height - ft * 2.54 * 12) / 2.54;

	printf("%dcm�� %d��Ʈ %.2lf��ġ�Դϴ�.\n", height, ft, inch);
	//�ι��� �ڸ� �������� ���ؾߵǴϱ� %.2�� ���ش� 
	return 0;
}