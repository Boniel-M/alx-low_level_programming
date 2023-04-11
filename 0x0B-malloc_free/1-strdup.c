#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Entry Point
 * @str: string to duplicate
 *
 * Return: NULL or duplicate
 */
char *_strdup(char *str)
{

	size_t len = strlen(str);

	char *dup = (char *) malloc((len + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
