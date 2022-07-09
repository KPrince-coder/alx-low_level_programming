#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle to print
 *
 * Return: void
 */

void print_triangle(int size)
{
	int k, i, j;

	if (size > 0)
	{
		for (i = 1; i < number + 1; i++)
		{
			for (k = number; k > i; k--)
			_putchar(' ');
			for (j = 0; j < i; j++)
			_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
