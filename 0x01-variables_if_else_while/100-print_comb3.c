#include <stdio.h>
/**
 * main - This function prints series of numbers in pairs
 * from 00-99 in ascending order seperated by a comma,
 * and a space
 *
 * Return: always (0)
 *
 */

int main(void)
{
	int i, k;

	for (i  = 0; i < 10; i++)

	{
		for (k = 1; k < 10; k++)
		{
			putchar((i % 10) + '0');
			putchar((k % 10) + '0');

			if (k == 10 && k < 10)
				continue;

		putchar(' ');
		putchar(',');
		}
	}
	putchar('\n');
	return (0);
}