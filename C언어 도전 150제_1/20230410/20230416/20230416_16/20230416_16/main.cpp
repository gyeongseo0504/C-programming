#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a,b,c;
    float min, max;
    printf("���� �� ���� �� �Է����ּ��� \n");

    printf("ù��° ������ �Է����ּ��� : \n");
    scanf("%f", &a);
    printf("�ι�° ������ �Է����ּ��� : \n");
    scanf("%f", &b);
    printf("����° ������ �Է����ּ��� : \n");
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