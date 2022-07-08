#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: the character to check
 *
 * Return: 1 on success and 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);

	return (0);
}
