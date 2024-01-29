#pragma warning(disable :4996)
#define MAX_LEN 1000
#include <stdio.h>

int main()
{
    FILE* fs;
    fs = fopen("test.txt", "r");
    char str[MAX_LEN];
    fgets(str, MAX_LEN, fs);
    printf("%s", str);
}