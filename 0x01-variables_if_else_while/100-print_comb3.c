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

	for (i  = 1; i < 10; i++)

	{
		for (k = i+1; k < 10; k++)
		{
			putchar((i % 10) + '1'); 
			putchar((k % 10) + '1');
			
			if (k == 10 && k < 10)
				continue;

		putchar(' ');
		putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
