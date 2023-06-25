#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
	/**
	 * main - prints all arguments it receives
	 * @argc: number of arguments
	 * @argv: array of arguments
	 *
	 * Return: Always 0 (Success)
	 */

	int i;

	for (i = 0; i < argc; i++)
    {
	    printf("%s\n", argv[i]);
    }
	return (0);
}
