#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main()
{
    double x_new = 0;
    double y_new = 0;
    double x = 0;
    double y = 0;
    double angle_degree = 0;

    printf("��ǥ�� �Է��ϼ��� (x, y): ");
    scanf("%lf %lf", &x, &y);
    printf("ȸ�� ������ �Է��ϼ���: ");
    scanf("%lf", &angle_degree);

    double angle_rad = angle_degree * M_PI / 180.0;
    x_new = x * cos(angle_rad) - y * sin(angle_rad);
    y_new = x * sin(angle_rad) + y * cos(angle_rad);

    printf("ȸ���� ��ǥ (x, y): %6.2lf %6.2lf\n", x_new, y_new);

    return 0;
}