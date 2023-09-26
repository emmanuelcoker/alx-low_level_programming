#include "main.h"

/**
 * _strspn - compare initial segment of string with another string
 * @s: string to search
 * @accept: string to search
 * Return: return length of the search
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int result = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				result++;
			j++;
		}
		i++;
		j = 0;
	}

	return (result);
}
