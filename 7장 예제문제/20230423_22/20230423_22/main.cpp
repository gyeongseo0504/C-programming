#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}


	return 0;
}
