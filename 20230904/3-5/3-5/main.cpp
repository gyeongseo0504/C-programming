#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

// 문자열, 정수, 실수형 변수의 구조체를 새로운 자료형 STUD로 생성하여 선언
typedef struct {
    char name[20];
    int num;
    double score;
} STUD;

void writeStudentData(STUD* list, int size) {
    FILE* fp = NULL;
    fopen_s(&fp, "score.dat", "wb");

    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        exit(1);
    }

    fwrite(list, sizeof(STUD), size, fp);
    fclose(fp);
}

void readStudentData(STUD* list, int size) {
    FILE* fp = NULL;
    fopen_s(&fp, "score.dat", "rb");

    if (fp == NULL) {
        fprintf(stderr, "파일 열기 오류\n");
        exit(1);
    }

    for (int i = 0; i < size; i++) {
        STUD s;
        fread(&s, sizeof(STUD), 1, fp);
        printf("이름 = %s, 학번 = %d, 학점 = %f\n", s.name, s.num, s.score);
    }

    fclose(fp);
}

int main(void) {
    STUD list[SIZE] = {
        {"KIM", 1, 4.5},
        {"PARK", 2, 4.3},
        {"LEE", 3, 3.7}
    };

    // 학생 데이터를 파일에 쓰기
    writeStudentData(list, SIZE);

    // 파일에서 학생 데이터 읽어와서 출력
    readStudentData(list, SIZE);

    return 0;
}