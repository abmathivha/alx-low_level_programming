#include <stdio.h>
/**
 * main - print first 50 fibonacci
 *
 * Return: 0 always.
 */
int main(void)
{
	float prev = 1, cur = 2, next = 0;
	int i;

	for (i = 0; i < 84; i++)
	{
		printf("%.0f, ", prev);
		next  = cur + prev;
		prev = cur;
		cur = next;
		if (i == 83)
			printf("%.0f\n", prev);
	}
	return (0);
}
