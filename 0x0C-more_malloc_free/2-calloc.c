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
	char *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total =  nmemb * size;
	ptr = malloc(total);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
