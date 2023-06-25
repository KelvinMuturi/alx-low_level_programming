#include <stdio.h>
#include "main.h"

int main(int argc __attribute__((unused)), char *argv[])
{
    /**
     * main - prints the name of the program
     * @argc: number of arguments
     * @argv: array of arguments
     *
     * Return: Always 0 (Success)
     */
    printf("%s\n", *argv);

    return (0);
}
