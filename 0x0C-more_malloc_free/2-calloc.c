#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocate memory to array
 * @nmemb: number of member elements in array
 * @size: sizeof() value of the type of the array
 * Return: return pointer or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr, i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	for (; i < nmemb; i++)
		ptr[i] = 0;

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
