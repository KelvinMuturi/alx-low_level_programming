#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes c to the std output
 * @c: what is printed out
 *
 * Return: 1 on success
 * -1 on error and appropriately set an error no
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
