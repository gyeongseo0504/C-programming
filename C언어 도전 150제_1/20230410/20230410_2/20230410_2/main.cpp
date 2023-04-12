#define CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void main()
{
	int x = 1;
	double y = 3.141592;
	double z = x + y;


	printf("%d + %.2lf = %.2lf", x, y, z);
}