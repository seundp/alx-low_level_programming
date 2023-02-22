#include "main.h"

/**
 *  _isalpha- check for alphabete
 * @c:character to check alphabet characters
 * Return:1 if charactermismamletter,0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
