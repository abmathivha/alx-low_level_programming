#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always.
 */
int main(void)
{
	long int i = 0, prev = 1, cur = 2, next = 0;

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", prev);
		next  = cur + prev;
		prev = cur;
		cur = next;
		if (i == 48)
			printf("%ld\n", prev);
	}
	return (0);
}
