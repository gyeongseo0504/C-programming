#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a, b, c, d, e = 0;
    double sum, avg = 0;
    
    printf("�ټ��� �� �Ǽ� �� �Է����ּ��� \n");
    printf("ù��° �Ǽ��� �Է����ּ��� : ");
    scanf("%f", &a);
    printf("\n�ι�° �Ǽ��� �Է����ּ��� : ");
    scanf("%f", &b);
    printf("\n����° �Ǽ��� �Է����ּ��� : ");
    scanf("%f", &c);
    printf("\n�׹�° �Ǽ��� �Է����ּ��� : ");
    scanf("%f", &d);
    printf("\n�ټ���° �Ǽ��� �Է����ּ��� : ");
    scanf("%f", &e);

    sum = a + b + c + d + e;
    avg = sum / 5.0;

    printf("\n���� %lf, ����� %lf �Դϴ�.", sum, avg);

    return 0;

}