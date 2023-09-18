#include "main.h"

/**
 * swap_int - swap variables
 * @a: value a to be swapped
 * @b: value b to be swapped
 * Return: return void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
