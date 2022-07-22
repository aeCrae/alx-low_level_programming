#include "main.h"

/**
 * _strlen_recursion - It's a function that returns the
 * length of a string passed in as parameter.
 * @s: Carries the string in.
 * Return: returns the string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
