#include <stdio.h>
/**
 * main - Loop from 1 to 100
 * Check if i is a multiple of both 3 and 5
 * Check if i is a multiple of 3
 * i is not a multiple of 3 or 5, so print it
 * Print a newline character to separate the output
 *
Return 0 to indicate success
 *
 * Return: 0 always
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}

		else if (i % 3 == 0)

		{
			printf("Fizz ");
		}

		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
