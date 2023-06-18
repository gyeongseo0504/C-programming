#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <math.h>

int main() {
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        int angle = rand() % 361;
        printf("각도: %d\n", angle);

        int a = angle % 360;
        if (a > 180)
            a -= 360;

        printf("각도: %d\n", a);

        int direction;
        if (a >= 0) {
            direction = a / 45;
            printf("시계 방향으로 %d도씩 돌아야 합니다.\n", abs(a));
        }
        else {
            direction = (360 + a) / 45;
            printf("반시계 방향으로 %d도씩 돌아야 합니다.\n", abs(a));
        }

        switch (direction) {
        case 0:
            printf("방향: 동\n");
            break;
        case 1:
            printf("방향: 북동\n");
            break;
        case 2:
            printf("방향: 북\n");
            break;
        case 3:
            printf("방향: 북서\n");
            break;
        case 4:
            printf("방향: 서\n");
            break;
        case 5:
            printf("방향: 서남\n");
            break;
        case 6:
            printf("방향: 남\n");
            break;
        case 7:
            printf("방향: 남동\n");
            break;
        case 8:
            printf("방향: 동북\n");
            break;
        case 9:
            printf("방향: 서북\n");
            break;
        case 10:
            printf("방향: 동남\n");
            break;
        default:
            printf("유효하지 않은 각도\n");
            break;
        }

        printf("\n");
    }

    return 0;
}
