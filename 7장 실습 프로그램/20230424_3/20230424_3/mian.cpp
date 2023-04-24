#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int b, x, y, z, n;

    printf("몇 번째 항까지 구할까요?");
    scanf("%d", &n);

    x = 0; y = 1;

    printf("%d %d ", x, y);

    for (b = 0; b <= n - 2; b++)
    {
        z = x + y;
        x = y;
        y = z;
        printf("%d ", z);
    }
    return 0;
}