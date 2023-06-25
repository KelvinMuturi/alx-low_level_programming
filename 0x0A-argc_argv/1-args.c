#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
    /**
     * main - print number of arguments passed to the program
     * @argc: number of arguments
     * @argv: array of arguments
     *
     * Return: Always 0 (Success)
     */
    (void) argv; /* Ignore argv */
    printf("%d\n", argc - 1);

    return (0);
}
