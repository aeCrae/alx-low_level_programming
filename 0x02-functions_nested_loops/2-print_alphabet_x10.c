#include "main.h"
/**
 * print_alphabet_x10 -> This function prints th * e alhabets 10 times
 */
void print_alphabet_x10(void)
{
	int alphabet;
	int count;

	for (count = 1; count <= 10; count++)
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	_putchar('\n');
}
