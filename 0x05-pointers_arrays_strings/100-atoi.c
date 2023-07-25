#include "main.h"

/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */

int _atoi(char *s)
{
	unsigned int sign = 0, result = 0;

	while (*s)
	{
		if (*s == '-')
			sign++;
		if (*s >= '0' && *s <= '9')
		{
			result *= 10;
			result += *s - '0';
		}
		else if (result)
			break;
		s++;
	}
	if (sign % 2)
		result *= -1;
	return (result);
}
