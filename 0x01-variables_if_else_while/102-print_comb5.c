#include <stdio.h>
/**
 * main - This function prints all possible combination of
 * two two digits
 * starting from 00 to 99. seperated by a space and
 * a comma
 * Return: 0 always
 *
 */
int main(void)
{
	int i, k;

	for (i = 0; i < 100; i++)
	{
			putchar(i / 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			for (k = i + 1; k < 100; k++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			if (i == 98 && k == 99)
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
