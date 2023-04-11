#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 *
 * @ac: Number of arguments.
 * @av: Array of arguments.
 *
 * Return: A pointer to the new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}
	len++;

	str = malloc(len * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';

	return (str);
}
