#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double Vin, R1, R2, Vout;

    // ����ڷκ��� �Է� �ޱ�
    printf("�Է� ����(Vin): ");
    scanf("%lf", &Vin);

    printf("�ϳ��� ������ ���� ��(R1 �Ǵ� R2, ��): ");
    scanf("%lf", &R1); // �� ��° ������ ���� �Է��ϰų� R1�� ���� �Է��մϴ�.

    printf("��� ����(Vout): ");
    scanf("%lf", &Vout);

    // ���� ���� �� ���
    if (R1 == 0)
    {
        // R1�� 0�̸� �и� 0�� ���� �ʵ��� ó��
        printf("R1�� ���� 0�� �� �� �����ϴ�.\n");
    }
    else
    {
        R2 = (Vout * R1) / (Vin - Vout);
        printf("������ ���� �� (R2): %.2lf ��\n", R2);
    }

    return