#include <stdio.h>

int main()
{
	int x = 3;
	int y = 7;

	printf("Before : x = %d , y = %d\n", x, y);

	x = y;
	y = x;

	printf("After : x = %d, y = %d\n", x, y);

	return 0;
}