#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *CFILE = "main.s";
    printf("export CFILE=%s", CFILE);
    return (0);
}
