#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double degree;
    double a, b;
    double A;
    double B;
    double radian;
    double Asin_ax;
    double Bsin_bx;
    double Asin_Bsin;

    printf("ù��° sin�� ���� ���� �Է��ϼ��� : ");
    scanf("%lf", &A);
    printf("�ι�° sin�� ���� ���� �Է��ϼ��� : ");
    scanf("%lf", &B);

    printf("ù��° sin�� �ֱ� ���� �Է��ϼ��� : ");
    scanf("%lf", &a);
    printf("�ι�° sin�� �ֱ� ���� �Է��ϼ��� : ");
    scanf("%lf", &b);

    FILE* fp;
    fp = fopen("data.txt", "w");

    if (fp == NULL)
    {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    fprintf(fp, "Asin(ax)\tBsin(bx)\tAsin_Bsin\n");

    for (degree = 0; degree <= 720; degree++)
    {
        radian = degree * M_PI / 180.0;
        Asin_ax = A * sin(a * radian);
        Bsin_bx = B * sin(b * radian);
        Asin_Bsin = Asin_ax + Bsin_bx;

        fprintf(fp, "%.2lf\t%.2lf\t%.2lf\n", Asin_ax, Bsin_bx, Asin_Bsin); //Low & High Pass Filters
    }

    printf("\n");
    printf("Asin_ax = %.1lf * sin(%.1lf x)\n", A, a);
    printf("Bsin_bx = %.1lf * sin(%.1lf x)\n\n", B, b);
    printf("�����͸� �����߽��ϴ�.\n");

    fclose(fp);

    return 0;
}
