#include "main.h"
#include <unistd.h>
/**
 * _purchar - write the character c to stdout
 *
 * Return: on sucess 1.
 * on error, -1 is returned, and errmo is se appropriately
 */
int _puchar(char c)
{
        return (write(1, &c, 1));
}
