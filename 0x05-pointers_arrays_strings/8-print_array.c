#include<stdio.h>
#include "main.h"
/**
  * print_array - print first n elements of an array
  *
  * @a : an int pointer
  * @n : number of elements
  * Return: nothing
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
