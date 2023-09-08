#include <stdio.h>

int main(void)
{
	int* numPtr;
	int* num1 = 10;

	numPtr = &num1;

	printf("%d\n", numPtr);

	printf("%d\n", &num1);

	printf("%d\n", *numPtr);



	return 0;
}