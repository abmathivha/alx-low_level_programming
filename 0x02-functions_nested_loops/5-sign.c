/**
 * print_sign- determines the sign of a number
 * @n: input number
 * Return: the sign of a number n
*/
#include "main.h"
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('0');
	return (0);
}
