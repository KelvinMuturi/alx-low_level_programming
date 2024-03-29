#include "main.h"

/**
 * _strcat - appends one string to another
 * @dest: The destination string
 * @src: The source string to be appended
 *
 * Return: Pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
