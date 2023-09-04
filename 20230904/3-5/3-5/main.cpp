#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

// ���ڿ�, ����, �Ǽ��� ������ ����ü�� ���ο� �ڷ��� STUD�� �����Ͽ� ����
typedef struct {
    char name[20];
    int num;
    double score;
} STUD;

void writeStudentData(STUD* list, int size) {
    FILE* fp = NULL;
    fopen_s(&fp, "score.dat", "wb");

    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }

    fwrite(list, sizeof(STUD), size, fp);
    fclose(fp);
}

void readStudentData(STUD* list, int size) {
    FILE* fp = NULL;
    fopen_s(&fp, "score.dat", "rb");

    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        STUD s;
        fread(&s, sizeof(STUD), 1, fp);
        printf("�̸� = %s, �й� = %d, ���� = %f\n", s.name, s.num, s.score);
    }

    fclose(fp);
}

int main(void) {
    STUD list[SIZE] = {
        {"KIM", 1, 4.5},
        {"PARK", 2, 4.3},
        {"LEE", 3, 3.7}
    };

    // �л� �����͸� ���Ͽ� ����
    writeStudentData(list, SIZE);

    // ���Ͽ��� �л� ������ �о�ͼ� ���
    readStudentData(list, SIZE);

    return 0;
}