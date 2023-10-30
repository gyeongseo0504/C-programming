#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_NO_CAPACITOR 10

int main() {
    int choice;
    int Capacitors;

    printf("���� ������ 1�� �Է�, ���� ������ 2�� �Է�: ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("���� ������ �����Ϸ��� 1��, ���� ������ �����Ϸ��� 2�� �Է�.\n");
        return 1;
    }

    printf("Ŀ�н����� ������ �Է� (�ִ� 10��): ");
    scanf("%d", &Capacitors);

    if (Capacitors <= 0 || Capacitors > MAX_NO_CAPACITOR) {
        printf("Ŀ�н��� ������ 1���� 10 ������ ���ڸ� �Է�\n");
        return 1;
    }

    double capacitors[MAX_NO_CAPACITOR];
    double totalCapacitance = 0.0;

    printf("%d���� Ŀ�н��Ϳ� ���� Ŀ�н��Ͻ� ���� �Է��ϼ���:\n", Capacitors);
    for (int i = 0; i < Capacitors; i++) {
        printf("Ŀ�н��� %d: ", i + 1);
        scanf("%lf", &capacitors[i]);
        totalCapacitance += capacitors[i];
    }

    if (choice == 1) {
        // ���� ����
        printf("���� ������ �� Ŀ�н��Ͻ�: %lf\n", totalCapacitance);
    }
    else {
        // ���� ����
        double totalInverseCapacitance = 0.0;
        for (int i = 0; i < Capacitors; i++) {
            totalInverseCapacitance += 1.0 / capacitors[i];
        }
        double parallelTotalCapacitance = 1.0 / totalInverseCapacitance;
        printf("���� ������ �� Ŀ�н��Ͻ�: %lf\n", parallelTotalCapacitance);
    }

    return 0;
}