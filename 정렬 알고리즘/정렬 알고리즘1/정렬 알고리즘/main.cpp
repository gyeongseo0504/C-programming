#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void bubble_sort(int arr[], int count) {
    int temp;
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE* file = fopen("input.txt", "r"); // ������ �б� ���� ����

    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    int numArr[10]; // ���Ͽ��� �о�� ���ڸ� ������ �迭

    for (int i = 0; i < 10; i++) {
        if (fscanf(file, "%d", &numArr[i]) != 1) {
            printf("���Ͽ��� �����͸� �д� �� ������ �߻��߽��ϴ�.\n");
            return 1;
        }
    }

    fclose(file); // ���� �ݱ�

    bubble_sort(numArr, sizeof(numArr) / sizeof(int));

    file = fopen("output.txt", "w"); // ������ ���� ���� ����

    if (file == NULL) {
        printf("������ �� �� �����ϴ�.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fprintf(file, "%d ", numArr[i]);
    }

    fclose(file); // ���� �ݱ�

    printf("���ĵ� �����͸� output.txt ���Ͽ� �����߽��ϴ�.\n");

    // ǥ�� ��¿��� ��� ���
    for (int i = 0; i < 10; i++) {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    return 0;
}