#include "main.h"
int check_prime(int, int);
/**
 * is_prime_number - a function to check if a number
 * @n: takes in an integer n to check
 * Return: returns 0 for non-prime, 1 for prime.
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - cjecks prime numbers
 * @n: number
 * @i: iterator
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i))
		return (1);
	return (check_prime(n, i + 1));
}
