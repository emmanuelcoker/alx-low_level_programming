#include <stdio.h>

int main (void)
{
	const char *message = "\"Programming is like building a multilingual puzzle\n";
	int i = 0;

	while (message[i] != '\o') {
        	putchar(message[i]);
        	i++;
    	}

    	return 0;
}
