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

	for (i = 1; i <= number; i++)
	{
		for (k = number; k >= i; k--)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar('#');

		_putchar('\n');
	}
}
