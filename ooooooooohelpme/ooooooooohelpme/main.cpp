#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int main() {
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        int angle = rand() % 91;
        int direction = 0;
        int a = rand() % 12;
        int absoluteValue = abs(direction);

        switch (a)
        {
        case 0:
            direction = 0;
            printf("���ʹ��� %d��: �� ���� �ð��������%d�� \n", direction, direction, direction);
            break;
        case 1:
            direction = 90 - angle;
            printf("�ϵ��ʹ��� %d��: �� ���� �ð��������%d��\n", angle, direction, direction);
            break;
        case 2:
            direction = 90;
            printf("���ʹ��� %d��: �� ���� �ð��������%d��\n", direction, direction, direction);
            break;
        case 3:
            direction = 90 + angle;
            printf("�ϼ��ʹ��� %d��: �� ���� �ð��������%d��\n", angle, direction, direction);
            break;
        case 4:
            direction = 180;
            printf("���ʹ��� %d��: �� ���� �ð��������%d��\n", direction, direction, direction);
            break;
        case 5:
            direction = 180 - angle;
            printf("�����ʹ��� %d��: �� ���� �ð��������%d��\n", angle, direction, direction);
            break;
        case 6:
            direction = -90;
            printf("���ʹ��� %d��: �� ���� �ݽð��������%d��\n", 360 + direction, direction, abs(direction));
            break;
        case 7:
            direction = -90 - angle;
            printf("�����ʹ��� %d��: �� ���� �ݽð��������%d��\n", angle, direction, abs(direction));
            break;
        case 8:
            direction = angle;
            printf("�����ʹ��� %d��: �� ���� �ð��������%d��\n", angle, direction, direction);
            break;
        case 9:
            direction = 180 - angle;
            printf("�����ʹ��� %d��:�� ����  �ð��������%d��\n", angle, direction, direction);
            break;
        case 10:
            direction = -90 - angle;
            printf("�����ʹ��� %d��: �� ���� �ݽð��������%d��\n", angle, direction, abs(direction));
            break;
        case 11:
            direction = -angle;
            printf("�����ʹ��� %d��:�� ����  �ݽð��������%d��\n", angle, direction, abs(direction));
            break;
        }
    }

    return 0;
}
