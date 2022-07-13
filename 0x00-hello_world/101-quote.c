#include <stdio.h>

/**
 * main - the entry point of the program
 *
 * Return: Success  always 1.
 */
int main(void)
{
	FILE *fp;
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fp = fopen("file.txt", "w");
	fwrite(str, 1, sizeof(str), fp);
	fclose(fp);
	return (1);
}
