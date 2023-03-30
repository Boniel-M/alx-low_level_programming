#include "main.h"
#include <ctype.h>
#include <string.h>
/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer to string
 *
 * Return: returns to a pointer
 */
char *cap_string(char *str)
{
	int i = 0;
	int capitalize = 1;

	while (str[i] != '\0')
	{
		if (capitalize && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		capitalize = 0;

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' ||
				str[i] == '!' || str[i] == '?' || str[i] == '"' ||
				str[i] == '(' || str[i] == ')' || str[i] == '{' ||
				str[i] == '}')
		{
			capitalize = 1;
		}
		i++;
	}
	return (str);
}
