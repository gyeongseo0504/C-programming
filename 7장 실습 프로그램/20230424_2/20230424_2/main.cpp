#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double r, n, result = 1.0;

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &r);

    printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
    scanf("%lf", &n);




    while (n != 0)
    {
        result *= r;
        n--;
    }
    printf("������� %lf", result);

    return 0;
}