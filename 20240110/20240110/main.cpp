#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define M_PI 3.141592

int main()
{
    printf("///////////////////// 문제 /////////////////////\n");

    printf("직렬 RLC교류회로가 있다.\n\n");

    double R, L, C;
    printf("저항기의 값 R을 입력하세요 : ");
    scanf("%lf", &R);
    printf("코일의 유도계수 L을 입력하세요 : ");
    scanf("%lf", &L);
    printf("축전기의 전기용량 C를 입력하세요 : ");
    scanf("%lf", &C);

    printf("\n");

    printf("이 세 소자의 양단에 걸린 교류전압은 진동수 f = 60.0 Hz이고, 최대전압은 V최대 = 1.50 x 10² V이다. 물음에 답하라.\n\n");

    printf("(a) 이 회로의 임피던스를 구하라.\n");
    printf("(b) 회로에 흐르는 최대전류를 구하라.\n");
    printf("(c) 위상각을 구하라.\n");
    printf("(d) 저항, 코일, 축전기 양단간에 걸리는 최대전압은 각각 얼마인가?\n\n\n");

    printf("///////////////////// 풀이 /////////////////////\n");

    double mirco_C = C * pow(10, -6);
    double f = 60.0;
    double V_max = 1.50 * pow(10, 2);
    double X_L = 2.0 * M_PI * f * L;
    double X_C = 1.0 / (2.0 * M_PI * f * mirco_C);
    double Z = sqrt(pow(R, 2) + pow(X_L - X_C, 2));
    double I_max = V_max / Z;
    double phi = atan((X_L - X_C) / R) * (180.0 / M_PI);
    double V_R_max = I_max * R;
    double V_L_max = I_max * X_L;
    double V_C_max = I_max * X_C;

    printf("임피던스: %.0lf Ω\n", Z);
    printf("최대전류: %.3lf A\n", I_max);
    printf("위상각: %.1lf °\n", phi);
    printf("저항에 걸리는 최대전압: %.1lf V\n", V_R_max);
    printf("코일에 걸리는 최대전압: %.1lf V\n", V_L_max);
    printf("축전기에 걸리는 최대전압: %.0lf V\n", V_C_max);

    return 0;
}