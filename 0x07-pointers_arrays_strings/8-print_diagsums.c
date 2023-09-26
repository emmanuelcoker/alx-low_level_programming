#include "main.h"

/**
 * print_diagsums - print diagonal sums
 * @a: multidimensional array
 * @size: size of dimensional array
 * Return: return void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sumK = 0;
	int sumM = 0;

	for (; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sumK += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sumM += *(a + i);
	}
	printf("%d, %d\n", sumK, sumM);
}
