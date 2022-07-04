#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intSize;
	float floatSize;
	char charSize;
	long long int longLongSize;
	long int longSize;

	/*printing the sizes of the various data types*/
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(charSize));
	printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(intSize));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(longSize));
	printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(longLongSize));
	printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(floatSize));
	return (0);
}
