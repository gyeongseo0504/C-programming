#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
	double AC, AE, BC, DE; //AC : AE = BC : DE ��Ī���� �Է����ش� 

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &BC);
	//�Ҽ��� �ڸ������� ���� �Է����ش� 

	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &AC);

	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &AE);

	DE = AE * BC / AC;
	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�. \n", DE);

	return 0;
}