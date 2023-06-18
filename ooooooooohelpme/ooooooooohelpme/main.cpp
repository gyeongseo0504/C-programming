#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int main() {
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        int angle = rand() % 361;
        printf("����: %d\n", angle);

        int a = angle % 360;
        if (a > 180)
            a -= 360;

        printf("����: %d\n", a);

        int direction;
        if (a >= 0) {
            direction = a / 45;
            printf("�ð� �������� %d���� ���ƾ� �մϴ�.\n", abs(a));
        }
        else {
            direction = (360 + a) / 45;
            printf("�ݽð� �������� %d���� ���ƾ� �մϴ�.\n", abs(a));
        }

        switch (direction) {
        case 0:
            printf("����: ��\n");
            break;
        case 1:
            printf("����: �ϵ�\n");
            break;
        case 2:
            printf("����: ��\n");
            break;
        case 3:
            printf("����: �ϼ�\n");
            break;
        case 4:
            printf("����: ��\n");
            break;
        case 5:
            printf("����: ����\n");
            break;
        case 6:
            printf("����: ��\n");
            break;
        case 7:
            printf("����: ����\n");
            break;
        case 8:
            printf("����: ����\n");
            break;
        case 9:
            printf("����: ����\n");
            break;
        case 10:
            printf("����: ����\n");
            break;
        default:
            printf("��ȿ���� ���� ����\n");
            break;
        }

        printf("\n");
    }

    return 0;
}
