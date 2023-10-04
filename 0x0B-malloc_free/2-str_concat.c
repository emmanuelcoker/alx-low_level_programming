#include <stdlib.h>
#include "main.h"


/**
 * check_str_len - count string length
 * @c: string
 *
 * Return: return number of characters.
 */

int check_str_len(char *c)
{
	unsigned int j = 0;

	if (c != NULL)
	{
		while (c[j] != '\0')
			j++;
	}
	return (j);
}

/**
 * *concat_str - concatenate two strings
 * @s1: dest
 * @s2: source
 *
 * Return: return pointer to new string.
 */
char *concat_str(char *s1, char *s2)
{
	char *result;
	unsigned int i = 0;
	unsigned int j = 0;

	j = check_str_len(s1) + check_str_len(s2);
	result =  malloc(sizeof(char) * (j + 1));

	if (result == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			result[i] = s1[i];
			i++;
		}
	}

	j = 0;

	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			result[i + j] = s2[j];
			j++;
		}
	}

	if (s1 != NULL && s2 == NULL)
	{
		result[i] = '\0';
	}

	return (result);
}

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

	result = concat_str(s1, s2);

	return (result);
}
