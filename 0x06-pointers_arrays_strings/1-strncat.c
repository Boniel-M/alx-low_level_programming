#include <string.h>
#include "main.h"
/**
 * _strncat - concanates two strings
 * @src: source string
 * @n: null bytes
 * @dest: destination string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, k;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (k = 0; k < n && src[k] != '\0'; k++, dest_len++)

	{
		dest[dest_len] = src[k];
	}
	dest[dest_len] = '\0';
	return (dest);
}
