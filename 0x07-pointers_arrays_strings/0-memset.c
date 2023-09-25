#include "main.h"

/**
 * _memset - replicate stdlib memset
 * @s: buffer
 * @b: bytes
 * @n: number of bytes
 * Return: return pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
