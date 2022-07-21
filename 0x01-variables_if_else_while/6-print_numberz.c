#include <stdio.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 1
 * starting from 0,followed by a new line 
 * Return: 0
 */
int main(void)
{
	int c = 0;
	int boy = 48;

	while(c < 10)
	{
		c += boy;
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
