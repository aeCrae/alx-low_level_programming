#include "main.h"
#include <string.h>

/**
 * _strncat - function to conct. two stirngs with n bytes
 * @dest: destination string
 * @src: the source string
 * @n: the byte limit.
 * Return: success always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
