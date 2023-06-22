#include "main.h"

/**
 * _memcpy - copies a specified memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
