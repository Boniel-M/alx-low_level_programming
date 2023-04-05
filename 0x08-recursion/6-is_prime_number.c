#include "main.h"
/**
 * is_prime_number - function that prints prime number
 * @n: input number
 *
 * Return: 0, 1 if prime factor
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
