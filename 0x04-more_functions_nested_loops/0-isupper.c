#include "main.h"
#include <ctype.h>

/**
 * _isupper - function to check whether a character is uppercase or not
 * @c: the character to verify
 *
 * Return: on success 1, otherwise 0
 */

int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);

	return (0);
}
