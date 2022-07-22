#include "main.h"
/**
 * factorial - this function aims to find the
 * factorial value of a number.
 * @n: this is the number to be factorialised.
 * Return: On success this should return the answer.
 */
int factorial(int n)
{
	if ((n == 0) || (n == 1))
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n-1));
	/*if (n < 0)
	*	return (-1);
	*/
}
