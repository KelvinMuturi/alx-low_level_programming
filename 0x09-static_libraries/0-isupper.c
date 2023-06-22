#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}
