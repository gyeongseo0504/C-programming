#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a,b,c;
    int min, max;
    printf("���� �� ���� �� �Է����ּ��� \n");

    printf("ù��° ������ �Է����ּ��� : \n");
    scanf("%d", &a);
    printf("�ι�° ������ �Է����ּ��� : \n");
    scanf("%d", &b);
    printf("����° ������ �Է����ּ��� : \n");
    scanf("%d", &c);
    
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
    printf("�ִ� : %d\n", max);
    printf("�ּڰ� : %d\n", min);

    return 0;
   
}