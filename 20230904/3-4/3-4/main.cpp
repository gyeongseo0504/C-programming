#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = NULL;
    char name[50], name2[50];
    int num, num2;
    double score, score2;

    // �л� ���� �Է� �ޱ�
    printf("�л��� �̸�, �й�, ���� �Է�: ");
    scanf("%s %d %lf", name, &num, &score);

    // ���Ͽ� �л� ���� ����
    fopen_s(&fp, "score.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }
    fprintf(fp, "%s %d %lf", name, num, score);
    fclose(fp);

    // ���Ͽ��� �л� ���� �о����
    fopen_s(&fp, "score.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "���� ���� ����\n");
        exit(1);
    }

    // ���Ͽ��� �л� ���� �б�
    int c = fscanf(fp, "%s %d %lf", name2, &num2, &score2);

    if (c != 3) {
        fprintf(stderr, "���� �б� ����\n");
        exit(1);
    }

    // ���� �л� ���� ���
    printf("���Ϸκ��� �Է¹��� �л� ����(�Է¿� ������ ������ �� : %d)\n�̸�: %s\n�й�: %d\n����: %f\n", c, name2, num2, score2);

    fclose(fp);
    return 0;
}