#include "main.h"

/**
 * _memset - modifies a block of memory with a specified value
 * @s: Starting address of the memory to be modified
 * @b: The desired value to set
 * @n: Number of bytes to be modified
 *
 * Return: Pointer to the modified memory block.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
