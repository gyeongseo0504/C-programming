#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a, b, c, d, e = 0;
    double sum, avg = 0;
    
    printf("다섯개 의 실수 를 입력해주세요 \n");
    printf("첫번째 실수를 입력해주세요 : ");
    scanf("%f", &a);
    printf("\n두번째 실수를 입력해주세요 : ");
    scanf("%f", &b);
    printf("\n세번째 실수를 입력해주세요 : ");
    scanf("%f", &c);
    printf("\n네번째 실수를 입력해주세요 : ");
    scanf("%f", &d);
    printf("\n다섯번째 실수를 입력해주세요 : ");
    scanf("%f", &e);

    sum = a + b + c + d + e;
    avg = sum / 5.0;

    printf("\n합은 %lf, 평균은 %lf 입니다.", sum, avg);

    return 0;

}