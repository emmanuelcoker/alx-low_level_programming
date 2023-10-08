#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenate n string
 * @s1: initial string
 * @s2: string 2
 * @n: number of chars to concatenate on s2
 * Return: return pointer or null
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *combined_str;
	unsigned int i = 0, j = 0, ls1 = 0, ls2 = 0;

	while (s1 && s1[ls1])
		ls1++;
	while (s2 && s2[ls2])
		ls2++;

	if (n >= ls2)
		n = ls2;

	combined_str = malloc(sizeof(char) * (ls1 + n + 1));

	if (combined_str == NULL)
		return (NULL);

	while (i < ls1)
	{
		combined_str[i] = s1[i];
		i++;
	}

	while (n < ls2 && i < (ls1 + n))
		combined_str[i++] = s2[j++];

	while (n >= ls2 && i < (ls1 + ls2))
		combined_str[i++] = s2[j++];

	combined_str[i] = '\0';

	return (combined_str);
}
