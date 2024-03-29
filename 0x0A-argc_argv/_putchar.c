#include <stdio.h>
#include "main.h"

int _putchar(char c)
{
    /**
     * _putchar - writes the character c to stdout
     * @c: The character to print
     *
     * Return: On success 1.
     * On error, -1 is returned and errno is set appropriately.
     */
    return (write(1, &c, 1));
}
