#include "main.h"

/**
 * print_diagonal - to print a sort of shape
 * @n: the character to be used for the shape
 * success always zero
 */
void print_diagonal(int n)
{
	int x = 0;

	for (x >= 1; x == n; x++)
	{
		if (n <= 0)
			continue;
		else
		{
			_putchar(x + ' ');
			_putchar('\\');
		}
	}
	_putchar('\n');
}
