#include <stdio.h>
/**
 * main - This is is a fuction of main
 * Return: Returns successfully.
 *
 */
int main(void)
{
    int i = 0;

    while (i < 9)
    {
        putchar(i + '0');
        if (i != 8)
        {
            putchar(',');
            putchar(' ');
        }
        i++;
    }
    putchar('\n');
    return 0;
}	
