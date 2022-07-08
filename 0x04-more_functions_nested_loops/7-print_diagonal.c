#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: the number of times the character '\' should print
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (int k = 0; k < i; k++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
