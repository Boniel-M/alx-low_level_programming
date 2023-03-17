include <stdio.h>
/**
 * main fucntion for putchar.
 * return main value (0).
 *
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	
	return (0);
}
