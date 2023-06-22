#include "main.h"

/**
 * _strncpy - copies a string up to a specified number of characters
 * @dest: The destination string
 * @src: The source string to be copied
 * @n: The maximum number of characters to be copied
 *
 * Return: Pointer to the resulting string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
