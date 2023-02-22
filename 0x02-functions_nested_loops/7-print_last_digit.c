#include "main.h"

/**
 * print_last_digit-prints the last digit of an interger
 * @a:number to compute last digit
 * Return: last digit
 */

int print_last_digit(int a)
{
	int ld = a % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
