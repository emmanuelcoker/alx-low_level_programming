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

	if (str == NULL)
		return (NULL);

	while (str[j])
		j++;

	arr = malloc(sizeof(char) * (j + 1));

	if (arr == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}

	return (arr);
}

