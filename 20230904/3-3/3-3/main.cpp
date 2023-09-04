#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main(void) {
    FILE* fp = NULL;
    char buf1[100], buf2[100];

.
    printf("문장 입력: ");
    if (fgets(buf1, sizeof(buf1), stdin) == NULL) {
        fprintf(stderr, "입력 오류\n");
        return 1;
    }


    fopen_s(&fp, "text.txt", "wt");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 실패\n");
        return 1;
    }
    fputs(buf1, fp);
    fclose(fp);

    
    fopen_s(&fp, "text.txt", "rt");
    if (fp == NULL) {
        fprintf(stderr, "파일 열기 실패\n");
        return 1;
    }

    char str[100];
    if (fgets(buf2, sizeof(buf2), fp) == NULL) {
        fprintf(stderr, "파일 읽기 실패\n");
        fclose(fp);
        return 1;
    }

    strcpy_s(str, sizeof(str), buf2);

    printf("%s 파일로부터 읽은 문자열 : %s\n", "text.txt", buf2);
    fclose(fp);

    return 0;
}