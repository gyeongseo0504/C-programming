#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a, b, c = 0;
    float min, max = 0;
    printf("���� �� �Ǽ� �� �Է����ּ��� \n");

    printf("ù��° �Ǽ��� �Է����ּ��� : \n");
    scanf("%f", &a);
    printf("�ι�° �Ǽ��� �Է����ּ��� : \n");
    scanf("%f", &b);
    printf("����° �Ǽ��� �Է����ּ��� : \n");
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
    printf("�ִ� : %f\n", max);
    printf("�ּڰ� : %f\n", min);

    return 0;
   
}