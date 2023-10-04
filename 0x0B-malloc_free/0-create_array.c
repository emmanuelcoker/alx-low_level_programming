#include "main.h"

/**
 * *create_array - create an array of characters using malloc
 * @c: character to print
 * @size: the size of the memory to print
 * Return: return NULL if not successful or print the array of characters.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(c));
	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}
