#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

#define ROWS 3
#define COLS 3

/*int main()

{
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    int r, c;

    printf("ù ��° ��� ��� �Է�:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%d", &A[r][c]);
        }
    }

    printf("�� ��° ��� ��� �Է�:\n");
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

    printf("��� ���� ���:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
    return 0;
}
void main()

{
    int A[ROWS][COLS];
    int B[ROWS][COLS];
    int C[ROWS][COLS];
    int r, c;

    printf("ù ��° ��� �Է�:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%d", &A[r][c]);
        }
    }

    printf("�� ��° ��� �Է�:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%d", &B[r][c]);
        }
    }

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = A[r][c] - B[r][c];
        }
    }

    printf("��� ���� ���:\n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
}*/
int main()
{
    int A[ROWS][COLS];
    int C[ROWS][COLS];
    int k;
    int r, c;
    printf("����� �Է�: \n");
    scanf("%d", &k);
    printf("ù ��° ��� ��� �Է�: \n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            scanf("%d", &A[r][c]);
        }
    }

    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            C[r][c] = k * A[r][c];
        }
    }
    printf("����� �� ��: \n");
    for (r = 0; r < ROWS; r++) {
        for (c = 0; c < COLS; c++) {
            printf("%d ", C[r][c]);
        }
        printf("\n");
    }
    return 0;
}
