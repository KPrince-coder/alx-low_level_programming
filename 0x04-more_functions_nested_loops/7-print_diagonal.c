#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: the number of times the character '\' should print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, k;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < i; k++)
				_putchar(' ');

			_putchar(92);
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
