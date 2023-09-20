#include "main.h"

/**
 * _strcat - concatenate string
 * @desc: result string
 * @src: string to concantenate with desc
 * Return: return pointer to desc
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	printf("%s\n", dest);
	return (dest);
}
