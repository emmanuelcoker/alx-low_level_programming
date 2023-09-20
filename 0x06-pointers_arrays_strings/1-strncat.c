#include "main.h"

/**
 * *_strncat - concatenate string with n
 * @dest: result string
 * @n: number of bytes to add from src
 * @src: string to concantenate with desc
 * Return: return pointer to desc
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
