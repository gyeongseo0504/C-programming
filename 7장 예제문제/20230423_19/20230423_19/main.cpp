#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x , y;
	 
	for (y = 1; y <= 5; y++)
	{
		for (x = 0; x < y ; x++)
			printf("*");

		printf("\n");
	}
	

	return 0;
}
