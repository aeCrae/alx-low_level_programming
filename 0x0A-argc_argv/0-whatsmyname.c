#include <stdio.h>
/**
 * main - This is the program entry point
 * @argc: This is the number of command line arguments
 * @argv: This is the index and stores the actual arguments
 * Return: success always returns 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
