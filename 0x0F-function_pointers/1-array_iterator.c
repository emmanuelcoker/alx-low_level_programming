#include "function_pointers.h"

/**
 * array_iterator - run a function on array elements
 * @array: array of items
 * @size: size of the array
 * @action: function pointer
 * Return: return nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	
	if (array && size && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
