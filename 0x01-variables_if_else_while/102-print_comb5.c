#include <stdio.h>
/**
 * main - This function prints all possible combination of
 * two two digits
 * starting from 00 to 99. seperated by a space and
 * a comma
 *
 * Return: 0 always.
 *
 */
int main(void)
{
	int i, k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k<= 9; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
			if (i != 9 || k != 9)
				continue;
		}
	{
		putchar(' ');
	}
	for (i = 0; i <= 9; i++)
		for (k = i + 1; k <= 9; k++ )
		{
			putchar(i + '0');
			putchar(k + '0');
			if (i != 9 || k != 9)
				continue;
		}
	{	putchar(',');
		putchar(' ');
	}
	}
}
