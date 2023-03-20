#include <stdio.h>
/**
 * Main - This function prints a combination of 
 * possible three numbers, seperated by a comma.
 * Return: 0 always
 *
 */

int main(void)
{
	int i, j, k;

	for (i = 0; i <= 6;+ i++)
	{
		for (j = 1; j <= 7; j++)
		{
			for (k = 3; k <= 8; k++)
			{
				if (j > i && i < k)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(k + '0');
			if (i != 6 || j != 8 ||k != 8)

		{
			putchar(',');
			putchar(' ');
		}
		}
			}
		}

	}
	putchar('\n');
	return (0);
}
