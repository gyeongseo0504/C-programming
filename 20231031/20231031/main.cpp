#include <stdio.h> 


int main()
{
    int num1 = 5;
    int num2;

    num2 = num1 ? 100 : 200;

    printf("%d\n", num2);

    return 0;
}



int main()
{
    int num1 = 10;
    int num2;

    num2 = num1 == 10 ? 100 : 200;

    printf("%d\n", num2);

    return 0;
}



int main()
{
    int num1 = 5;

    printf("%s\n", num1 == 10 ? "10ÀÔ´Ï´Ù." : "10ÀÌ ¾Æ´Õ´Ï´Ù.");

    return 0;
}



int main()
{
    float num1 = 1.2f;

    printf("%f\n", num1 > 2.0f ? 3.0f : 4.0f);

    return 0;
}
