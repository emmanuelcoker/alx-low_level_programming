#include "main.h"

/**
 * *_memset - replicate stdlib memset
 * @s: buffer
 * @b: bytes
 * @n: number of bytes
 * Return: return pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *p;

	p = &s;
	for (; i <= n; i++)
	{
		p[i] = b;
	}

	return (*p);
}
