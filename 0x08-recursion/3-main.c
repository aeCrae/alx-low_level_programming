#include "main.h"
#include <stdio.h>
/**
 * main - the entry point of the program.
 * check the code.
 * Return: Success always retrun 0.
 */
int main(void)
{
	int r;

	r = factorial(1);
	printf("%d\n", r);

	r = factorial(5);
	printf("%d\n", r);
	
	r = factorial(10);
	printf("%d\n", r);

	r = factorial(-1024);
	printf("%d\n", r);

	return (0);
}
