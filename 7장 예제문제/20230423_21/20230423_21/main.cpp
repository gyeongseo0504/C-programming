#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	char x ,y ;

	for (y = 1; y < 10000; y++) 
	{
		for (x = 1; x < 10; x++)
		{
			if (x < 0.0)
				goto OUT;
			printf("*");
		}
	}
	OUT:

	return 0;
}
