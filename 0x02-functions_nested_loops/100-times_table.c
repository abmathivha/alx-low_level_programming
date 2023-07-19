#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints a times table for a given value n
 * @n: the number
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != 0)
			{
				printf(",");
				printf("%4d", i * j);
			}
			else 
			{
				printf("0");
			}
		}
		printf("\n");
	}
}
