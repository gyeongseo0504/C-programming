#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

int main()
{
	int arr[SIZE]; 
	int i = 0;

	srand(time(NULL)); 

	for (i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}

	printf("Arrangement :");
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}

	int max = arr[0];
	int min = arr[0];

	for (i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	printf("\nmax = %d\n", max);
	printf("min = %d\n", min);

	return 0;

}