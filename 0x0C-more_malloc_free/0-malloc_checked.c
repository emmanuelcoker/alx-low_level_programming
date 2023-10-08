/**
 * *malloc_checked - allocate memory using malloc
 * @b: size of memory to allocate
 * Return: return pointer or exit with 98 status
*/

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
