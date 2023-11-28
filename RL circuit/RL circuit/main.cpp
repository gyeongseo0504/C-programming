#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// �ùķ��̼� �Ķ����
#define TIME_STEP 0.1
#define SIMULATION_TIME 5.0

// RL ȸ�� ���
double R, L, V;

// ������ ����ϴ� �Լ�
double calculateCurrent(double t) {
    // RL ȸ�� ���� ����: I(t) = (V / R) * (1 - e^(-R/L * t))
    return (V / R) * (1 - exp(-R / L * t));
}

int main() {
    // ����ڷκ��� �Է� �ޱ�
    printf("Resistance (R): ");
    scanf("%lf", &R);

    printf("Inductance (L): ");
    scanf("%lf", &L);

    printf("Voltage (V): ");
    scanf("%lf", &V);

    // �ð��� ���� ���� ���
    printf("\nTime\tCurrent\n");
    printf("----------------\n");

    for (double t = 0; t <= SIMULATION_TIME; t += TIME_STEP) {
        double current = calculateCurrent(t);
        printf("%.2f\t%.4f\n", t, current);
    }

    return 0;
}
