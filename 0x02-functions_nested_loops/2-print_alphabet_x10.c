#include "main.h"
/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 * Return: On success 1
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}

