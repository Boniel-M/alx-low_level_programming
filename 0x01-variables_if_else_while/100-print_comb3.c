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

	for (i  = 0; i <= 8; i++)

	{
		for (k = i + 1; k <= 9; k++)
		{
			putchar(i + '0');
			putchar(k + '0');

			if (i != 8 || k != 9)
				continue;

				putchar(',');
				putchar(' ');
			}

	}
	putchar('\n');
	return (0);
}
