#include "main.h"
/**
 * _islower - This function checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lower case
 *
 */

int _islower(int c)

{
	if (c > 97 && c <= 122)

	{
		return (1);
	}

	return (0);
}
