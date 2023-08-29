#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
/*	char buffer[] = "This is a string!\0And this is the rest of the #buffer :)\1\2\3\4\5\6\7#cisfun\n\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\x20\x21\x34\x56#pointersarefun #infernumisfun\n";*/

	char buffer2[] = "Talk is cheap. Show me the code.";

/*	printf("%s\n", buffer);*/
/*	printf("---------------------------------\n");*/
/*	print_buffer(buffer, sizeof(buffer));*/

	printf("%s\n", buffer2);
	printf("---------------------------------\n");
	print_buffer(buffer2, sizeof(buffer2));
	return (0);
}
