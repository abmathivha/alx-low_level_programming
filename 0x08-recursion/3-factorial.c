#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: integer input
 * Return: factorial of that number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
