#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n ;

	printf("======================\n");
	printf("   n     nÀÇ Á¦°ö     \n");
	printf("======================\n");

	n = 1;
	while (n <= 10)
	{
		printf("5%d      5%d\n", n, n * n);
		n++;
	}
	return 0;
}