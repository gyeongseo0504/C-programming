#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double Vin, R1, R2, Vout;

    // 사용자로부터 입력 받기
    printf("입력 전압(Vin): ");
    scanf("%lf", &Vin);

    printf("하나의 저항의 저항 값(R1 또는 R2, 옴): ");
    scanf("%lf", &R1); // 두 번째 저항의 값을 입력하거나 R1의 값을 입력합니다.

    printf("출력 전압(Vout): ");
    scanf("%lf", &Vout);

    // 남은 저항 값 계산
    if (R1 == 0)
    {
        // R1이 0이면 분모가 0이 되지 않도록 처리
        printf("R1의 값은 0이 될 수 없습니다.\n");
    }
    else
    {
        R2 = (Vout * R1) / (Vin - Vout);
        printf("나머지 저항 값 (R2): %.2lf 옴\n", R2);
    }

    return