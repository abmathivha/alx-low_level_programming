#include "main.h"
#include <stdio.h>
/**
 * print_last_digit- computes the last digit of an int
 * @n:  an int whose last digit is determined
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{	_putchar(n % 10);
		return (n % 10);
	}
	_putchar(_abs(n) % 10);
	return (_abs(n) % 10);
}
