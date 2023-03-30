#include <string.h>
#include "main.h"
#include <stdio.h>
/**
 * _strcat - concanates two strings
 * @dest: destination to append string
 * @src: string source
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (src_len = 0; src[src_len] != '\0'; src_len++, dest_len++)
	{
		dest[dest_len] = src[src_len];
	}
	dest[dest_len] = '\0';
	return (dest);
}
