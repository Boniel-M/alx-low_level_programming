#include <stdio.h>
/**
 * main - Entry point
 * Desription: a program that prints the numbers from 1 to 100
 * But for multiples of 3 print Fizz instead of the number
 * and for the multiples of 15 print Buzz
 * For numbers which are multiples of both 3  and 5 print FizzBuzz
 * Return: 0 to indicate success
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (i % 15 == 0)

			printf("FizzBuzz");

		else if (i % 3 == 0)

			printf("Fizz");

		else if (i % 5 == 0)

			printf("Buzz");

		else
			printf("%i", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
