#include "main.h"

/**
 * reverse_array - reverse aray
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: return void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int mid = n / 2;
	int temp;

	while (i <= mid)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = temp;
		i++;
		n--;
	}
}
