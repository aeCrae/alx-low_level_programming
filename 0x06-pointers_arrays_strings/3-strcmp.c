#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function to compare
 * @s1: string one
 * @s2: string two
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; s1++)
	{
		for (i = 0; s2[i] != '\0'; s2++)
		{
			if (s1[i] == s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
			else
				return (s1[i] - s2[i]);
		}
	}
}
