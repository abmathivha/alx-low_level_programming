#include <stdio.h>

/**
 * main - Prints the alphabets, a to z.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char[10] numbers = "0123456789";
	int i = 0;

	while (i <= 8)
	{
		putchar(numbers[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
