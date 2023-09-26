#include "main.h"

/**
 * _strstr - find occurrence of substring in string
 * @haystack: string to search
 * @needle: substring to find
 * Return: returns the pointer to the begiing of string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr1;
	char *ptr2;

	while (*haystack != '\0')
	{
		ptr1 = haystack;
		ptr2 = needle;

		while (*haystack != '\0' && *ptr2 != '\0' && *haystack == *ptr2)
		{
			haystack++;
			ptr2++;
		}
		if (!*ptr2)
			return (ptr1);
		haystack = ptr1 + 1;
	}
}
