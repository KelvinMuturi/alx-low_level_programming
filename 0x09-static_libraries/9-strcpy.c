#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: The destination to copy to
 * @src: The source to copy from
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; x < l; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';
	return (dest);
}
