#include "main.h"
#include <stdio.h>
/**
 * print_last_digit- computes the last digit of an int
 * @n:  an int whose last digit is determined
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
