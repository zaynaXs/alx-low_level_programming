#include <stdio.h>
#include "main.h"

/**
 * print_array - outputs elements of an integer array
 * seperated by comma
 * @a: the array to print
 * @n: the size of array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	printf("%d", a[i]);
	i++;
	for ( ; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}

