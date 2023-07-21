/**
 * main - determines the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 always
 */

#include<stdio.h>

int main(void)
{
	long int i = 2;
	long int number = 612852475143;

	while (i * i <= number)
	{
		if (number % i)
			i++;
		else
			number /= i;
	}
	printf("%ld\n", number);

	return (0);
}
