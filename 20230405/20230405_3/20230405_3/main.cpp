#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#define pi 3.141592   //#define���� pi�� 3.141592 ��°� �������ش�

int main(void) {

	float radius, surface, volume;   //������ ǥ���� ü���� ���� �Ҽ��� �������ش� 

	printf("���� �������� �Է��ϼ��� : "); 

	scanf("%f", &radius);		
	//scanf("�Է¹��� ����", &�����̸�); ���� &radius��� ������ ���������� ���� �޾Ƽ� radius�� �־��ݴϴ� 

	surface = 4.0 * pi * radius * radius;
	//ǥ������ 4 ���ϱ� ���� ���ϱ� �������� �����̴�

	volume = (4.0 / 3.0) * pi * radius * radius * radius;
	//ü���� 4 ���ϱ� ���� ���ϱ� �������� �������̴�

	printf("���� ǥ���� : %.2f\n", surface);
	//���� ǥ������ %.2f(�Ҽ�)�� surface���� �־ ��� ���ش� 

	printf("���� ü�� : %.2f\n", volume);
	//���� ǥ������ %.2f(�Ҽ�)�� volume���� �־ ��� ���ش� 

	return 0;
}