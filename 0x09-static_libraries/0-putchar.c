#include <unistd.h>

/**
 * _putchar - prints a single character to the standard output
 * @c: The character to be printed
 *
 * Return: On success, returns the number of characters printed (1).
 * On error, returns -1 and sets the appropriate value of errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
