#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}

int main() {
    FILE* file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    int numArr[10];
    int i = 0;

    while (i < 10 && fscanf(file, "%d", &numArr[i]) == 1) {
        i++;
    }

    fclose(file);

    if (i != 10) {
        printf("파일에서 데이터를 읽는 중 오류가 발생했습니다.\n");
        return 1;
    }

    qsort(numArr, sizeof(numArr) / sizeof(int), sizeof(int), compare);

    // 파일로 저장
    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    for (int j = 0; j < 10; j++) {
        printf("%d ", numArr[j]);  // 정렬된 값을 출력
        fprintf(file, "%d ", numArr[j]);  // 파일에 저장
    }

    printf("\n");

    fclose(file);

    return 0;
}