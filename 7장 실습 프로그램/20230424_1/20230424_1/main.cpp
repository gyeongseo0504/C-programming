#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int num, i;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &num);

    printf("���: ");

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            printf("%d ", i);
    }
    return 0;
}