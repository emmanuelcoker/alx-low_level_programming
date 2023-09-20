#include "main.h"

/**
 * *_strncpy - copy n charcters to dest
 * @dest: resulting string
 * @src: string to copy
 * @n: number of charcters to copy
 * Return: return character dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
