#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* getDirection(int angle) {
    int angleMod = (angle + 360) % 360;

    int direction = angleMod / 45;

    switch (direction) {
    case 0:
        return "동";
    case 1:
        return "북동";
    case 2:
        return "북";
    case 3:
        return "북서";
    case 4:
        return "서";
    case 5:
        return "서남";
    case 6:
        return "남";
    case 7:
        return "남동";
    case 8:
        return "동북";
    case 9:
        return "서북";
    case 10:
        return "남서";
    case 11:
        return "동남";
    default:
        return "유효하지 않은 각도";
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
            printf("%d도는 %s 방향입니다.\n", angle, direction);
        }
        else {
            printf("%d도는 범위를 벗어난 각도입니다.\n", angle);
        }
    }

    return 0;
}
