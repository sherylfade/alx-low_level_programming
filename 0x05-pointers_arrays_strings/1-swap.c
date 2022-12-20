#include "main.h"
#include <stdio>

/**
 * swap_int - Write a function that swaps the values of two integers
 * @a - first int
 * @b - second int
 */

void swap_int(int *a, int *b)
{
	char c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
