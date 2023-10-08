#include "main.h"
#include <stdlib.h>


/**
 * *array_range - create array with range of values
 * @min: minimum value
 * @max: maximum value
 * Return: return pointer or NULL
*/

int *array_range(int min, int max)
{
	int *ptr;
	unsigned int i = 0, range;

	if (min > max)
		return (NULL);

	range =  max - min;

	ptr =  malloc(sizeof(int) * range + 1);

	for (; i < range; i++)
	ptr[i] = min++;

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
