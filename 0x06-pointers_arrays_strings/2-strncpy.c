#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncpy - copies a string
 *
 * @dest: destination of a string
 * @src: string source
 * @n: null bytes
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int Bonface;

	for (Bonface = 0; Bonface < n && src[Bonface] != '\0'; Bonface++)
	{
		dest[Bonface] = src[Bonface];
	}
	for (; Bonface < n; Bonface++)
	{
		dest[Bonface] = '\0';
	}
	return (dest);
}
