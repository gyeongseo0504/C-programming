#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a, b, c, d, e;
    double sum;
    double avg;
    printf("�ټ��� �� ���� �� �Է����ּ��� \n");
    printf("ù��° ������ �Է����ּ��� : ");
    scanf("%f", &a);
    printf("\n�ι�° ������ �Է����ּ��� : ");
    scanf("%f", &b);
    printf("\n����° ������ �Է����ּ��� : ");
    scanf("%f", &c);
    printf("\n�׹�° ������ �Է����ּ��� : ");
    scanf("%f", &d);
    printf("\n�ټ���° ������ �Է����ּ��� : ");
    scanf("%f", &e);

    sum = a + b + c + d + e;
    avg = sum / 5.0;

    printf("\n���� %lf, ����� %lf �Դϴ�.", sum, avg);

    return 0;

}