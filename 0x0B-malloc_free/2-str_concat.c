#include <stdlib.h>
#include "main.h"


/**
 * *str_concat - concatenate two strings
 * @s1: dest
 * @s2: source
 *
 * Return: return pointer to new string.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i = 0, j = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	while (s1[j] != '\0')
		j++;

	while (s2[j] != '\0')
		j++;

	result =  malloc(sizeof(char) * (j));

	if (result == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	j = 0;

	while (s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}

	return (result);
}
