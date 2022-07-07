#include "main.h"
/**
 * print_sign -> a function to tell positive from
 * negative numbers
 * @n: the parameter to be checked
 * Return: values for return check
 */
int print_sign(int n)
{
	int n;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (1);
}
