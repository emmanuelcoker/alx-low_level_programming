#include "main.h"

/**
 * print_array - print values of an array
 * @a: array to be printed
 * @n: lenth of the array
 * Return: return void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}

