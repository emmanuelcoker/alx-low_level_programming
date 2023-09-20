#include "main.h"

/**
 * *_strcat - concatenate string
 * @dest: result string
 * @src: string to concantenate with desc
 * Return: return pointer to desc
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
