#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest prime factor of 61285247514
 *
 * is_prime: 612852475143 is_prime
 *
 * Return: 0 always
 */

int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782848; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
		n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
