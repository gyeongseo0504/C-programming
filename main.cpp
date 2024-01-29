#pragma warning(disable :4996)
#define MAX_LEN 100
#include <stdio.h>

int main()
{
    FILE* fs;
    fs = fopen("test.txt", "r");
    while (feof(fs) == 0) {
        char str[MAX_LEN];
        fgets(str, MAX_LEN, fs);
        printf("%s", str);
    }
    fclose(fs);
}