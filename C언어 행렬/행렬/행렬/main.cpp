#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

#define ROWS 3
#define COLS 3

int main()

{
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    int k = 0;
    int r = 0, c = 0;

    printf("첫 번째 행렬 요소 입력:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%d", &A[r][c]);
        }
    }

    printf("두 번째 행렬 요소 입력:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%d", &B[r][c]);
        }
    }
    

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = A[r][c] + B[r][c];
        }
    }

    printf("행렬 덧셈 결과:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = A[r][c] - B[r][c];
        }
    }

    printf("행렬 뺄셈 결과:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
    printf("상수를 입력: \n");
    scanf("%d", &k);

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = k * A[r][c];
        }
    }
    printf("상수배 한 값: \n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
}