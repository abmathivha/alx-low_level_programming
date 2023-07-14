#include <stdio.h>

/**
 * main - Prints the alphabets, a to z.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i <= 25)
	{
		putchar(letters[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
