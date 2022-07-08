#include "main.h"

/**
 * more_numbers - prints x10 of numbers from 0-14
 *
 * Return - void
 */

void more_numbers(void)
{
	int counter = 0;

	while (counter <= 10)
	{
		for (int i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar(i + 48)
		}
		_putchar('\n');

		counter++;
	}
}
