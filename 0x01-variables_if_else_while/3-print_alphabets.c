#include <stdio.h>
/**
 * main - main fucntion for putchar.
 * Return:: value runs successfully.
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar (ch);
	putchar('\n');
	return (0);
}
