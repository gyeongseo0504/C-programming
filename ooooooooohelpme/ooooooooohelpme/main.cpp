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
            printf("동쪽방향 %d°: θ = %d°\n시계방향으로%d° \n", direction, direction, direction);
            break;
        case 1:
            direction = 90 - angle;
            printf("북동쪽방향 %d°: θ = %d°\n시계방향으로%d°\n", angle, direction, direction);
            break;
        case 2:
            direction = 90;
            printf("북쪽방향 %d°: θ = %d°\n시계방향으로%d°\n", direction, direction, direction);
            break;
        case 3:
            direction = 90 + angle;
            printf("북서쪽방향 %d°: θ = %d°\n시계방향으로%d°\n", angle, direction, direction);
            break;
        case 4:
            direction = 180;
            printf("서쪽방향 %d°: θ = %d°\n시계방향으로%d°\n", direction, direction, direction);
            break;
        case 5:
            direction = 180 - angle;
            printf("서남쪽방향 %d°: θ = %d°\n시계방향으로%d°\n", angle, direction, direction);
            break;
        case 6:
            direction = -90;
            printf("남쪽방향 %d°: θ = %d°\n반시계방향으로%d°\n", 360 + direction, direction, direction);
            break;
        case 7:
            direction = -90 - angle;
            printf("남동쪽방향 %d°: θ = %d°\n반시계방향으로%d°\n", angle, direction, direction);
            break;
        case 8:
            direction = angle;
            printf("동북쪽방향 %d°: θ = %d°\n시계방향으로%d°\n", angle, direction, direction);
            break;
        case 9:
            direction = 180 - angle;
            printf("서북쪽방향 %d°: θ = %d°\n시계방향으로%d°\n", angle, direction, direction);
            break;
        case 10:
            direction = -90 - angle;
            printf("남서쪽방향 %d°: θ = %d°\n반시계방향으로%d°\n", angle, direction, direction);
            break;
        case 11:
            direction = -angle;
            printf("동남쪽방향 %d°: θ = %d°\n반시계방향으로%d°\n", angle, direction, direction);
            break;
        }
    }

    return 0;
}
