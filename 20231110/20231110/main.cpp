#include <stdio.h>
#include <math.h>

int main() {
    double q, R, B, V, E;

    // 전하 값 (예: 전자의 전하는 -1.602 x 10^-19 쿨롱)
    printf("입자의 전하를 입력하세요 (쿨롱 단위): ");
    scanf("%lf", &q);

    // 반지름 입력 받기
    printf("입자의 운동 반지름을 입력하세요 (미터 단위): ");
    scanf("%lf", &R);

    // 자기장의 강도 입력 받기
    printf("자기장의 강도를 입력하세요 (테슬라 단위): ");
    scanf("%lf", &B);

    // 로런츠 힘을 이용하여 속도 계산 (V = q * R * B)
    V = fabs(q) * R * B;

    // 에너지 계산 (E = 0.5 * m * V^2, 여기서 m은 입자의 질량, 여기서는 1로 가정)
    E = 0.5 * V * V;

    printf("입자의 속도는 %.2f m/s 입니다.\n", V);
    printf("입자의 에너지는 %.2e 입니다.\n", E);

    return 0;
}
