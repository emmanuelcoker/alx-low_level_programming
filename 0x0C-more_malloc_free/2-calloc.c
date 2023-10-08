#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * *_calloc - allocate memory to array
 * @nmemb: number of member elements in array
 * @size: sizeof() value of the type of the array
 * Return: return pointer or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);


	return (ptr);
}
