#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string into integer
 * @s: character that points
 * Return: 0 always
 *
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			sign *= 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
			{
				if (sign == - 1)
				{
					return (INT_MIN);
				}
				else
				{
					return INT_MAX;
				}
			}
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}
	return (sign * num);
}
