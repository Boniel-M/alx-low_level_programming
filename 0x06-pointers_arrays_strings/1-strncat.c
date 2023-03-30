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
	int dest_len, src_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (src_len = 0; src[src_len] < n && src[src_len] != '\0'; src_len++, dest_len++)

	{
		dest[dest_len] = src[src_len];
	}
	dest[dest_len] = '\0';
	return (dest);

}
