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

    printf("직렬(1), 병렬(2) 합성 저항 계산을 선택하시오: ");
    scanf("%d", &select);

    switch (select)
    {
    case 1:
        printf("직렬 저항을 선택했습니다.\n");
        break;

    case 2:
        printf("병렬 저항을 선택했습니다.\n");
        break;

    default:
        printf("잘못 선택하였습니다. 프로그램을 종료합니다.\n");
        return 1;
    }

    printf("\n");
    printf("저항의 개수: ");
    scanf("%d", &resistor_num);

    for (int i = 0; i < resistor_num; i++)
    {
        printf("저항 R%d의 값을 입력하세요: ", i + 1);
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

    printf("합성저항 값: %.2lf\n", total_resistor);

    return 0;
}