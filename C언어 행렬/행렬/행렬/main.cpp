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

   
    for (r = 0; r < 3; r++) {
        printf("A����� %d�� %d���� �Է�: ", r, c);
        for (c = 0; c < 3; c++) {
            scanf("%d", &A[r][c]);
        }
    }

 
    for (r = 0; r < 3; r++) {
        printf("B����� %d�� %d���� �Է�: ", r, c);
        for (c = 0; c < 3; c++) {
            scanf("%d", &B[r][c]);
        }
    }
    

    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            C[r][c] = A[r][c] + B[r][c];
        }
    }

    printf("��� ���� ���:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }

    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            C[r][c] = A[r][c] - B[r][c];
        }
    }

    printf("��� ���� ���:\n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
    printf("����� �Է�: \n");
    scanf("%d", &k);

    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            C[r][c] = k * A[r][c];
        }
    }
    printf("����� �� ��: \n");
    for (r = 0; r < 3; r++) {
        for (c = 0; c < 3; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
}