#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The characters to match
 *
 * Return: The number of characters in the initial segment of 's'
 *         consisting only of characters from 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
