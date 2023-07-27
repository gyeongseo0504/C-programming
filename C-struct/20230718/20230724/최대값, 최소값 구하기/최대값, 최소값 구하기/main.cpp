#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main() 
{
	int arr[SIZE];

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 99 + 1;
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}

	printf("max = %d\n", max);
	printf("min = %d\n", min);

	return 0;


}