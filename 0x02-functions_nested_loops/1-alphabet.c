#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letters;

	for (letter = 'a'; letter <= 'z' ; letter++)
		-putchar(letter);

	putchar('\n');
}
