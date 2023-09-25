#include "main.h"

/**
 * _memcpy - copy address from source to dest
 * @dest: destination address
 * @src: soruce address pointer
 * @n: number of bytes to copy
 * Return: return destination pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return dest;
}
