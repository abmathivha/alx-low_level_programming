#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from i (inclusive) to 98.
 * @i:the first number to print
 */
void print_to_98(int i)
{

	if (i < 98)
	{
		for (; i < 98; i++)
			printf("%d, ", i);
		printf("%d\n", 98);
	}
	else
	{
		for (; i > 98; i--)
			printf("%d, ", i);
		printf("%d\n", 98);
	}
}
