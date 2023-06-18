#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* getDirection(int angle) {
    int angleMod = (angle + 360) % 360;

    int direction = angleMod / 45;

    switch (direction) {
    case 0:
        return "��";
    case 1:
        return "�ϵ�";
    case 2:
        return "��";
    case 3:
        return "�ϼ�";
    case 4:
        return "��";
    case 5:
        return "����";
    case 6:
        return "��";
    case 7:
        return "����";
    case 8:
        return "����";
    case 9:
        return "����";
    case 10:
        return "����";
    case 11:
        return "����";
    default:
        return "��ȿ���� ���� ����";
    }
}

int getRandomAngle() {
    return rand() % 361 - 180;
}

int main() {
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        int angle = getRandomAngle();

        if (angle >= -180 && angle <= 180) {
            const char* direction = getDirection(angle);
            printf("%d���� %s �����Դϴ�.\n", angle, direction);
        }
        else {
            printf("%d���� ������ ��� �����Դϴ�.\n", angle);
        }
    }

    return 0;
}
