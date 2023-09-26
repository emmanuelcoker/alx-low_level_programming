#include "main.h"

/**
 * _strpbrk - find first occurrence of string
 * @s: string to search from
 * @accept: search query
 * Return: return pointer to byte in s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	for (; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return ('\0');
}
