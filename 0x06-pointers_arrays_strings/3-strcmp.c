#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp -  compares tow strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 always
 */
int _strcmp(char *s1, char *s2)
{
	int compare = 0;

	while (s1[compare] == s2[compare])
	{
		if (s1[compare] == '\0')
			return (0);
		{
			compare++;
		}
	}
	return (s1[compare] - s2[compare]);
}
