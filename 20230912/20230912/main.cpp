#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define MAX_NO_RESISTOR 10
double resistor[MAX_NO_RESISTOR] = { 0.0, };

double serial_resistor_calculator(int resistor_num)
{
    double total_resistor = 0.0;

    for (int i = 0; i < resistor_num; i++)
    {
        total_resistor += resistor[i];
    }

    return total_resistor;
}

double parallel_resistor_calculator(int resistor_num)
{
    double total_resistor = 0.0;

    for (int i = 0; i < resistor_num; i++)
    {
        total_resistor += 1.0 / resistor[i];
    }

    return 1.0 / total_resistor;
}

int main(void)
{
    int select;
    int resistor_num = 0;
    double total_resistor;

    printf("����(1), ����(2) �ռ� ���� ����� �����Ͻÿ�: ");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        printf("���� ������ �����߽��ϴ�.\n");
        break;

    case 2:
        printf("���� ������ �����߽��ϴ�.\n");
        break;

    default:
        printf("�߸� �����Ͽ����ϴ�. ���α׷��� �����մϴ�.\n");
        return 1;
    }

    printf("\n");
    printf("������ ����: ");
    scanf("%d", &resistor_num);

    for (int i = 0; i < resistor_num; i++)
    {
        printf("���� R%d�� ���� �Է��ϼ���: ", i + 1);
        scanf("%lf", &resistor[i]);
    }

    if (select == 1)
    {
        total_resistor = serial_resistor_calculator(resistor_num);
    }
    else
    {
        total_resistor = parallel_resistor_calculator(resistor_num);
    }

    printf("�ռ����� ��: %.2lf\n", total_resistor);

    return 0;
}