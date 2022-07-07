#include "main.h"

/**
 * _isalpha -> The main emtry point
 * @c: A parameter
 * Return: return value
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
