#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}

	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - '0');
		b++;
	}
	return (result);

}
