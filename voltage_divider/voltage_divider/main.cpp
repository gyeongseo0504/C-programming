#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double Vin, R1, R2, Vout, I, P;

    // ����ڷκ��� �Է� �ޱ�
    printf("�Է� ����(Vin): ");
    scanf("%lf", &Vin);

    printf("ù ��° ������ ���� ��(R1, ��): ");
    scanf("%lf", &R1);

    printf("�� ��° ������ ���� ��(R2, ��): ");
    scanf("%lf", &R2);

    // ���� �й� ���
    Vout = Vin * (R2 / (R1 + R2));

    // ���� ��� (���� �й� ��Ģ �̿�)
    I = Vout / R2;

    // ���� ���
    P = Vout * I;

    // ��� ���
    printf("��� ����(Vout): %.2lf\n", Vout);
    printf("����(I): %.2lf\n", I);
    printf("����(P): %.2lf\n", P);

    return 0;
}
