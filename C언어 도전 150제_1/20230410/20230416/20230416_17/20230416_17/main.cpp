#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    int sum;
    double avg;
    printf("�ټ��� �� ���� �� �Է����ּ��� \n");
    printf("ù��° ������ �Է����ּ��� : ");
    scanf("%d", &a);
    printf("\n�ι�° ������ �Է����ּ��� : ");
    scanf("%d", &b);
    printf("\n����° ������ �Է����ּ��� : ");
    scanf("%d", &c);
    printf("\n�׹�° ������ �Է����ּ��� : ");
    scanf("%d", &d);
    printf("\n�ټ���° ������ �Է����ּ��� : ");
    scanf("%d", &e);

    sum = a + b + c + d + e;
    avg = sum / 5.0;

    printf("\n���� %d, ����� %lf �Դϴ�.", sum, avg);

    return 0;

}