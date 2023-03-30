#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @x: pointer to string to be converted
 *
 * Return: pointer to uppercase string
 */
char *string_toupper(char *x)
{
	int string;

	string = 0;
	while (x[string] != '\0')
	{
		if (x[string] >= 97 && x[string] <= 122)
		{
			x[string] = x[string] - 32;
		}
		string++;
	}
	return (x);
}
