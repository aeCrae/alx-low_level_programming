#include "main.h"

/**
 * _sqrt_recursion - This function finds the natural
 * square root of the number
 * @n: the number to obtain sqrt
 * @m: a temp storage
 * @s: the divisor
 * Return: returns the sqrt
 */
int _sqrt(int, int);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursive square root
 * @n: number
 * @i: iterator
 *
 * Return: square root
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
