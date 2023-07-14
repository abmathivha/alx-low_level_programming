#include <stdio.h>

/**
 * main - Prints the alphabets, a to z.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j;

	while (i <= 56)
	{
		j = i + 1;
		while (j <= 57)
		{
			putchar(i);
			putchat(j);
			if (i != 56 && j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
