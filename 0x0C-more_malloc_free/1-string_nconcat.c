#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - concanates two string
 * @s1: string to be used
 * @s2: string to be used
 * @n: specifies maximu number of character for s2
 *
 * Return: NULL if string fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1;
	unsigned int len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}

	result = malloc(len1 + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, len1);
	memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';
	return (result);
}
