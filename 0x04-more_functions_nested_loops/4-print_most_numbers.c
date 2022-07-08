#include "main.h"

/**
 * print_most_numbers - skips two numbers by a m * echanism
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
		if (i == '2' || i == 4)
			continue;
	}
	_putchar('\n');
}
