#include "main.h"

/**
 * _strstr - find occurrence of substring in string
 * @haystack: string to search
 * @needle: substring to find
 * Return: returns the pointer to the begiing of string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *hPtr;
	char *nPtr;

	while (*haystack != '\0')
	{
		hPtr = haystack;
		nPtr = needle;

		while (*haystack != '\0' && *nPtr != '\0' && *haystack == *nPtr)
		{
			haystack++;
			nPtr++;
		}
		if (!*nPtr)
			return (hPtr);
		haystack = hPtr + 1;
	}
	return (0);

}
