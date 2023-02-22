#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 *
 * Return: on sucess 1
 * on error, -1 is returned, and errno is se appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
