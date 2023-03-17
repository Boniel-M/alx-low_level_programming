#include <stdio.h>
/**
 * main - This is is a fuction of main
 * Return: Returns successfully.
 *
 */
int main(void)
	{
    int i = 1;

    putchar('1');
    while (i < 9)
    {
        putchar(',');
        putchar(' ');
        i++;
        putchar(i + '0');
    }
    putchar('\n');
    return 0;
}
