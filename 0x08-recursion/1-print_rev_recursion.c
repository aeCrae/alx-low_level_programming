#include "main.h"

/**
 * _print_rev_recursion - a function to print a string in
 * reverse, recursively.
 * @s: The string to be reversed.
 */
void _print_rev_recursion(char *s)
{
	/*_putchar(*s);*/
	/*s++;*/
	/*_print_rev_recursion(s); */
	if (*s == '\0')
		return;
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
