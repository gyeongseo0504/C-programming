#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void min_max(int* a1, int* b1, int* c1, int* min, int* max)
{
    *min = *a1;
    *max = *a1;
    if (*b1 < *min)
        *min = *b1;
    if (*c1 < *min)
        *min = *c1;

    if (*b1 > *max)
        *max = *b1;
    if (*c1 > *max)
        *max = *c1;
}
int main()
{
    int a, b, c;
    int min, max;

    printf("�� ������ �Է��ϼ���: ");
    scanf("%d %d %d", &a, &b, &c);

    min_max(&a, &b, &c, &min, &max);

    printf("���� ū �� : %d\n", max);
    printf("���� ���� �� : %d\n", min);

    return 0;
}