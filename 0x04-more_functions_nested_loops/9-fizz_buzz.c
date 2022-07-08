#include <stdio.h>

/**
 * main - main program entry point
 * Description: prints Fizz-Buzz. Look at README.md for more details
 *
 * Return: 0 if success or 1 otherwise
 */

int main(void)
{
	int number;

	for (number = 1; number < 100; number++)
	{
		if (number % 3 == 0 || number % 5 == 0)
		{
			if (number % 3 == 0 && number % 5 == 0)
				printf("FizzBuzz ");
			else if (number % 5 == 0)
				printf("Buzz ");
			else
				printf("Fizz ");
		}
		else
			printf("%d ", number);
	}
	printf("Buzz\n");

	return (0);
}
