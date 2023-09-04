#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE* fp = NULL;
    char name[50], name2[50];
    int num, num2;
    double score, score2;

    // 학생 정보 입력 받기
    printf("학생의 이름, 학번, 점수 입력: ");
    scanf("%s %d %lf", name, &num, &score);

    // 파일에 학생 정보 쓰기
    fopen_s(&fp, "score.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        exit(1);
    }
    fprintf(fp, "%s %d %lf", name, num, score);
    fclose(fp);

    // 파일에서 학생 정보 읽어오기
    fopen_s(&fp, "score.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        exit(1);
    }

    // 파일에서 학생 정보 읽기
    int c = fscanf(fp, "%s %d %lf", name2, &num2, &score2);

    if (c != 3) {
        fprintf(stderr, "파일 읽기 오류\n");
        exit(1);
    }

    // 읽은 학생 정보 출력
    printf("파일로부터 입력받은 학생 정보(입력에 성공한 데이터 수 : %d)\n이름: %s\n학번: %d\n학점: %f\n", c, name2, num2, score2);

    fclose(fp);
    return 0;
}