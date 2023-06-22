#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to find
 *
 * Return: Pointer first occurrence of substr 'needle' in 'haystack',
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
