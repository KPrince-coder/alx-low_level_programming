#include "main.h"

/**
 * print_alphabet - main entry point to program
 *
 * Description: function prints all lowercase letters
 *
 * Return: returns all lowercase letters
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
