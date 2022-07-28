#include <stdio.h>
/**
 * main - The entry point of a program
 * @argc: The number of command line arguments
 * @argv: The indices and stores the actual arguments
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
