#include "main.h"

/**
 * _strchr - check occurrence of character in string
 * @s: string
 * @c: character to check for
 * Return: pointer to string or NULL
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
