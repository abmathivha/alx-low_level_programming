#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always.
 */
int main(void)
{
	long int i = 0, sum = 0, prev = 1, cur = 2, next = 0;

	while (cur < 4000000)
	{
		next  = cur + prev;
		prev = cur;
		if (cur % 2 == 0)
			sum += cur
		cur = next;
	}
	printf("%ld\n", sum);
	return (0);
}
