#include "main.h"

/**
 * _pow_recursion - Raises the first integer to the
 * power of the second integer.
 * @x: the first integer.
 * @y: the power
 * Return: returns the value of the expression.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
