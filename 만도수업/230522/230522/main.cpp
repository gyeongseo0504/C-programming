#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int A[3][3] = { {0, 0, 0},{0, 0, 0},{0, 0, 0} };

    int B[3][3] = { {0, 0, 0},{0, 0, 0},{0, 0, 0} };

    int C[3][3] = { {0, 0, 0},{0, 0, 0},{0, 0, 0} };

    int i, j, k;
    int sum = 0;

    printf("첫번째 행렬을 입력: ");
    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("두번째 행렬을 입력: ");
    for (i = 0; i < 3; i++) {

        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {

            sum = 0;
            for (k = 0; k < 3; k++) {

                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d\t", C[i][j]);
        }
        printf("\n");
    }


    return 0;
}
 

