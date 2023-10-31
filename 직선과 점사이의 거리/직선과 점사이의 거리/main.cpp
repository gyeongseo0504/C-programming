#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, x, y, x2, y2, distance;

    // 사용자로부터 직선의 계수 입력 받기
    printf("직선의 방정식 y = ax + b에서 a와 b를 입력하세요:\n");
    scanf("%lf %lf", &a, &b);

    // 사용자로부터 점의 좌표 입력 받기
    printf("점의 좌표(x y)를 입력하세요:\n");
    scanf("%lf %lf", &x, &y);

    // 직선과의 거리 계산
    distance = fabs((a * x - y + b) / sqrt(a * a + 1));

    // 수직인 직선 위의 점 찾기
    x2 = (b * a + a * a * x - y) / (a * a + 1);
    y2 = (a * a * y + a * b + b) / (a * a + 1);

    // 결과 출력
    printf("입력한 점 (%.2lf, %.2lf)에서 직선과의 거리는 %.2lf입니다.\n", x, y, distance);
    printf("입력한 점에서 직선과 수직인 직선 위의 점은 (%.2lf, %.2lf)입니다.\n", x2, y2);

    return 0;
}
