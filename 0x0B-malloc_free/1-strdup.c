#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - duplicate a string
 * @str: character to print
 *
 * Return: return pointer to new string.
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i = 0, j = 0;

	while (str[j])
		j++;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * sizeof(j + 1));

	if (arr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}

	return (arr);
}

