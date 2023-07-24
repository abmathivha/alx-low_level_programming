#include "main.h"
/**
  * swap_int - swaps two integrs by address
  *
  * @a : a first int
  * @b : a second int
  * Return : nothing
  */

void swap_int(int *a, int *b)
{
	int temp = *a; /* hold onto a value in a */
	*a = *b;
	*b = temp;
}
