#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a,b,c;
    float min, max;
    printf("세개 의 정수 를 입력해주세요 \n");

    printf("첫번째 정수를 입력해주세요 : \n");
    scanf("%f", &a);
    printf("두번째 정수를 입력해주세요 : \n");
    scanf("%f", &b);
    printf("세번째 정수를 입력해주세요 : \n");
    scanf("%f", &c);
    
    if (a >=b)
    {
        if (a >= c) max = a;
        else max = c;
    }
    else
    {
        if (b >= c) max = b;
        else max = c;
    }
    if (a <= b)
    {
        if (a <= c) min = a;
        else min = c;
    }
    else
    {
        if (b <= c) min = b;
        else min = c;
    }
    printf("최댓값 : %f\n", max);
    printf("최솟값 : %f\n", min);

    return 0;
   
}