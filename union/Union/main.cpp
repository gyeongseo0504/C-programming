#include <stdio.h>  

int main(void)
{
	printf("char의 크기: : %d \n", sizeof(char));
	printf("short의 크기: %d \n", sizeof(short));
	printf("int의 크기: : %d \n", sizeof(int));

	printf("long의 크기: %d \n", sizeof(long));
	printf("long long의 크기: %d \n", sizeof(long long));

	printf("float의 크기: %d \n", sizeof(float));

	printf("double의 크기: %d \n", sizeof(double));
	printf("long double의 크기: %d \n", sizeof(long double));
	return 0;
	}