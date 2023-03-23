#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number
 * the number 612852475143
 * @num: prime factor of the number 612852475143
 * is_prime: 612852475143 is_prime
 *
 * Return: 0 always
 */

int is_prime(long int num)
{
	if (num < 2)
	{
		return (0);
	}
	for (long int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
int main(void)
{
	long int num = 612852475143;
	long int max_prime = -1;

	for (long int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			if (is_prime(i))
			{
				if (i > max_prime)
				{
					max_prime = i;
				}
			}
			if (is_prime(num / i))
			{
				if ((num / i) > max_prime)
				{
					max_prime = num / i;
				}
			}
		}
	}
	printf("%ld\n", max_prime);
	return (0);
}
