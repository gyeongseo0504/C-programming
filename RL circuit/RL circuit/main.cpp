#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 시뮬레이션 파라미터
#define TIME_STEP 0.1
#define SIMULATION_TIME 5.0

// RL 회로 상수
double R, L, V;

// 전류를 계산하는 함수
double calculateCurrent(double t) {
    // RL 회로 전류 공식: I(t) = (V / R) * (1 - e^(-R/L * t))
    return (V / R) * (1 - exp(-R / L * t));
}

int main() {
    // 사용자로부터 입력 받기
    printf("Resistance (R): ");
    scanf("%lf", &R);

    printf("Inductance (L): ");
    scanf("%lf", &L);

    printf("Voltage (V): ");
    scanf("%lf", &V);

    // 시간에 따른 전류 출력
    printf("\nTime\tCurrent\n");
    printf("----------------\n");

    for (double t = 0; t <= SIMULATION_TIME; t += TIME_STEP) {
        double current = calculateCurrent(t);
        printf("%.2f\t%.4f\n", t, current);
    }

    return 0;
}
