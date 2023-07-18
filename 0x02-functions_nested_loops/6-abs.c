#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an int
 * @n:  an int whose absolute value is required
 * Return: an abs of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-1 * n);
}
