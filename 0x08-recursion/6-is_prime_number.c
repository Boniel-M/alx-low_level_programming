#include "main.h"
/**
 * is_prime_helper - helper function to check if a number is prime
 * @n: input number
 * @i: current factor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
/**
 * is_prime_helper - helper function to check if a number is prime
 * @n: input number
 * @i: current factor being checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);
	return (is_prime_helper(n, i - 1));
}
