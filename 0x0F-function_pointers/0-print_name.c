#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print the name using pointer to function
 * @name:The string to add
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
