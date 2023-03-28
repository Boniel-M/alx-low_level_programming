#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts string into integer
 * @s: character that points
 * Return: 0 always
 *
 */

int _atoi(char *s)
{
        int sign = 1;
        long num = 0;

        while (*s != '\0')
        {
                if (*s == '-')
                {
                        if (sign == -1 || num != 0)
                        {
                                // overflow occurred
                                return sign == -1 ? INT_MIN : INT_MAX;
                        }
                        sign = -1;
                }
                else if (*s == '+')
                {
                        if (sign == -1 || num != 0)
                        {
                                // overflow occurred
                                return sign == -1 ? INT_MIN : INT_MAX;
                        }
                        sign = 1;
                }
                else if (*s >= '0' && *s <= '9')
                {
                        if (num > (INT_MAX - (*s - '0')) / 10)
                        {
                                // overflow occurred
                                return sign == -1 ? INT_MIN : INT_MAX;
                        }
                        num = num * 10 + (*s - '0');
                }
                else if (num > 0)
                {
                        break;
                }
                s++;
        }
	       return (int)(sign * num);
}
