#include <stdio.h>
#include "main.h"


/**
 * print_triangle - prints a triangle
 * given a size
 * @size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((j = size - i); j > 0; j--)
			{
				putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				putchar('#');
			}
			if (i == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}

