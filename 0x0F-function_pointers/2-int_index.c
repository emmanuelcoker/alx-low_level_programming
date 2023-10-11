#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - find an element in an array and return the index
 * @array: array of items
 * @size: size of the array
 * @cmp: function pointer
 * Return: return -1 if an error occurs and the index if true
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}

		return (-1);
	}

	return (-1);
}
