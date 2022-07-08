#include "main.h"

/**
 * print_line - prints a striaght line on the
 * terminal
 * @n: the number of times to print
 */
void print_line(int n)
{
	if (n <= 0)
	{ _putchar('\n');
	}
	else
	{
		for (n = 0; n; n++)
		{
			_putchar('_');
		}
		_putchar('\n');
}
