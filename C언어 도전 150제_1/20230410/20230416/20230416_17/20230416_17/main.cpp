#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int sum;
    double avg;
    printf("다섯개 의 정수 를 입력해주세요 \n");
    printf("첫번째 정수를 입력해주세요 : ");
    scanf("%d", &a);
    printf("\n두번째 정수를 입력해주세요 : ");
    scanf("%d", &b);
    printf("\n세번째 정수를 입력해주세요 : ");
    scanf("%d", &c);
    printf("\n네번째 정수를 입력해주세요 : ");
    scanf("%d", &d);
    printf("\n다섯번째 정수를 입력해주세요 : ");
    scanf("%d", &e);

    sum = a + b + c + d + e;
    avg = sum / 5.0;

    printf("\n합은 %d, 평균은 %lf 입니다.", sum, avg);

    return 0;

}