#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - checks if a character is a digit
 *
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
/**
 * multiply - multiplies two positive numbers represented as strings
 *
 * @num1: the first number
 * @num2: the second number
 *
 * Return: a pointer to a string representing the product of num1 and num2
 */
char *multiply(char *num1, char *num2)
{
	int len1, len2, len3, i, j, carry, n1, n2, prod;
	char *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len3 = len1 + len2;
	result = malloc(sizeof(char) * (len3 + 1));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len3; i++)
		result[i] = '0';
	result[len3] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			prod = n1 * n2 + carry + (result[i + j + 1] - '0');
			carry = prod / 10;
			result[i + j + 1] = prod % 10 + '0';
		}
		result[i + j + 1] = carry + '0';
	}
	i = 0;
	while (result[i] == '0')
		i++;
	if (i == len3)
	{
		result[0] = '0';
		result[1] = '\0';
	}
	else
		result += i;
	return (result);
}
/**
 * main - multiplies two positive numbers
 *
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	while (*num1)
	{
		if (!is_digit(*num1))
		{
			printf("Error\n");
			return (98);
		}
		num1++;
	}
	while (*num2)
	{
		if (!is_digit(*num2))
		{
			printf("Error\n");
			return (98);
		}
		num2++;
	}
	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);
	return (0);
}
