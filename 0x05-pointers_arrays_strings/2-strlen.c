#include "main.h"
#include <stdio.h>
/**
 * _strlen - determines len of a str
 * @s: character to determin len
 *
 * Return: 0 always
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
