#include "main.h"

/**
 * swap_int - This function swaps an integer
 * @a: the first integer( a pointer)
 * @b: the second integer(a pointer)
 * @c: the swapper
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
