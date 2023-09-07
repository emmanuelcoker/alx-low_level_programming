#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *CFILE = "main.c";
    printf("export CFILE=%s;  ./0-preprocessor", CFILE);
    return (0);
}
