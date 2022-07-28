#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - this is the entry point of the program
 * @argc: counts the number of commandline arguments'
 * @argv: store the content and is the index of arguments
 * Return: success always returns 0.
 */
int main(int argc, char *argv[])
{
	if (2 < argc < 4)
	{
		puts("Error");
		return (1);
	}
	int i;
	int k;
	int mul = 1;

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
		/* The function atoi here converts argv[ith] item to int*/
	}
	/* since it was declared from the function as a char */
	printf("%d\n", mul);
	return (0);
}
