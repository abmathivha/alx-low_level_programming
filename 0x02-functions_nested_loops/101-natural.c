#include <stdio.h>
/**
 * main - computes and prints the sum of all the
 * Return: o always
 **/
int main(void)
{
	int sum, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
