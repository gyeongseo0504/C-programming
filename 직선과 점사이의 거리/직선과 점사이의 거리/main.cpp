#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, x, y, x2, y2, distance;

    // ����ڷκ��� ������ ��� �Է� �ޱ�
    printf("������ ������ y = ax + b���� a�� b�� �Է��ϼ���:\n");
    scanf("%lf %lf", &a, &b);

    // ����ڷκ��� ���� ��ǥ �Է� �ޱ�
    printf("���� ��ǥ(x y)�� �Է��ϼ���:\n");
    scanf("%lf %lf", &x, &y);

    // �������� �Ÿ� ���
    distance = fabs((a * x - y + b) / sqrt(a * a + 1));

    // ������ ���� ���� �� ã��
    x2 = (b * a + a * a * x - y) / (a * a + 1);
    y2 = (a * a * y + a * b + b) / (a * a + 1);

    // ��� ���
    printf("�Է��� �� (%.2lf, %.2lf)���� �������� �Ÿ��� %.2lf�Դϴ�.\n", x, y, distance);
    printf("�Է��� ������ ������ ������ ���� ���� ���� (%.2lf, %.2lf)�Դϴ�.\n", x2, y2);

    return 0;
}
