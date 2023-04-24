#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double r, n, result = 1.0;

    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &r);

    printf("실수의 값을 입력하시오: ");
    scanf("%lf", &n);




    while (n != 0)
    {
        result *= r;
        n--;
    }
    printf("결과값은 %lf", result);

    return 0;
}