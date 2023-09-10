#include <stdio.h>

int main (void)
{
	const char *message = "\"Programming is like building a multilingual puzzle";
	int i = 0;

	while (message[i] != "\e") {
        	putchar(message[i]);
        	i++;
    	}

    	putchar('\n');
    	return 0;
}
