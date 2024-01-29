#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    FILE* file = fopen("test.txt", "w");
    char ky;

    if (file == NULL)
    {
        perror("파일을 열수 없삼\n");
        return 1;
    }

    fprintf(file, "홍갱서 \n");

    fclose(file);

    file = fopen("test.txt", "r");

    if (file == NULL) 
    {
        printf("파일 열수 없삼! \n");
        return 1; 
    }

    while ((ky = fgetc(file)) != EOF) 
    {
        printf("%c", ky);
    }

    return 0;
}