#include <stdio.h>

/**
 * main - Prints the alphabets, a to z.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[16] = "0123456789abcdef";
	int i = 0;

	while (i <= 15)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
