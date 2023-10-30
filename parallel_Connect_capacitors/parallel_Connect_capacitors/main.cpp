#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_NO_CAPACITOR 10

int main() {
    int choice;
    int Capacitors;

    printf("직렬 연결은 1을 입력, 병렬 연결은 2를 입력: ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 2) {
        printf("직렬 연결을 선택하려면 1을, 병렬 연결을 선택하려면 2를 입력.\n");
        return 1;
    }

    printf("커패시터의 개수를 입력 (최대 10개): ");
    scanf("%d", &Capacitors);

    if (Capacitors <= 0 || Capacitors > MAX_NO_CAPACITOR) {
        printf("커패시터 개수를 1에서 10 사이의 숫자를 입력\n");
        return 1;
    }

    double capacitors[MAX_NO_CAPACITOR];
    double totalCapacitance = 0.0;

    printf("%d개의 커패시터에 대한 커패시턴스 값을 입력하세요:\n", Capacitors);
    for (int i = 0; i < Capacitors; i++) {
        printf("커패시터 %d: ", i + 1);
        scanf("%lf", &capacitors[i]);
        totalCapacitance += capacitors[i];
    }

    if (choice == 1) {
        // 직렬 연결
        printf("직렬 연결의 총 커패시턴스: %lf\n", totalCapacitance);
    }
    else {
        // 병렬 연결
        double totalInverseCapacitance = 0.0;
        for (int i = 0; i < Capacitors; i++) {
            totalInverseCapacitance += 1.0 / capacitors[i];
        }
        double parallelTotalCapacitance = 1.0 / totalInverseCapacitance;
        printf("병렬 연결의 총 커패시턴스: %lf\n", parallelTotalCapacitance);
    }

    return 0;
}