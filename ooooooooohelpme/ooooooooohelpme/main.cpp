#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int main() {
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        int angle = rand() % 91;
        int direction;
        int a = rand() % 10;

        switch (a)
        {
        case 0:
            direction = 0;
            printf("���ʹ��� %d��: �� = %d��\n�ð��������%d�� \n", direction, direction, direction);
            break;
        case 1:
            direction = 90 - angle;
            printf("�ϵ��ʹ��� %d��: �� = %d��\n�ð��������%d��\n", angle, direction, direction);
            break;
        case 2:
            direction = 90;
            printf("���ʹ��� %d��: �� = %d��\n�ð��������%d��\n", direction, direction, direction);
            break;
        case 3:
            direction = 90 + angle;
            printf("�ϼ��ʹ��� %d��: �� = %d��\n�ð��������%d��\n", angle, direction, direction);
            break;
        case 4:
            direction = 180;
            printf("���ʹ��� %d��: �� = %d��\n�ð��������%d��\n", direction, direction, direction);
            break;
        case 5:
            direction = 180 - angle;
            printf("�����ʹ��� %d��: �� = %d��\n�ð��������%d��\n", angle, direction, direction);
            break;
        case 6:
            direction = -90;
            printf("���ʹ��� %d��: �� = %d��\n�ݽð��������%d��\n", 360 + direction, direction, direction);
            break;
        case 7:
            direction = -90 - angle;
            printf("�����ʹ��� %d��: �� = %d��\n�ݽð��������%d��\n", angle, direction, direction);
            break;
        case 8:
            direction = angle;
            printf("�����ʹ��� %d��: �� = %d��\n�ð��������%d��\n", angle, direction, direction);
            break;
        case 9:
            direction = 180 - angle;
            printf("�����ʹ��� %d��: �� = %d��\n�ð��������%d��\n", angle, direction, direction);
            break;
        case 10:
            direction = -90 - angle;
            printf("�����ʹ��� %d��: �� = %d��\n�ݽð��������%d��\n", angle, direction, direction);
            break;
        case 11:
            direction = -angle;
            printf("�����ʹ��� %d��: �� = %d��\n�ݽð��������%d��\n", angle, direction, direction);
            break;
        }
    }

    return 0;
}
