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
    int num = 0;
    int digit;

    while (*s != '\0') {
        if (*s == '-') {
            sign = -1;
        }
        else if (*s == '+') {
            sign = 1;
        }
        else if (*s >= '0' && *s <= '9') {
            digit = *s - '0';
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num * 10 + digit;
        }
        else if (num > 0) {
            break;
        }
        s++;
    }

    return sign * num;
}
