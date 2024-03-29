#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int check_num(char *str)
{
    /**
     * check_num - check if there are digits in the string
     * @str: array of characters
     *
     * Return: 1 if there are digits, 0 otherwise
     */
    unsigned int count;

    count = 0;
    while (count < strlen(str))
    {
        if (!isdigit(str[count]))
        {
            return (0);
        }

        count++;
    }
    return (1);
}

int main(int argc, char *argv[])
{
    /**
     * main - Print the name of the program
     * @argc: Count arguments
     * @argv: Arguments
     *
     * Return: Always 0 (Success)
     */
    int count;
    int str_to_int;
    int sum = 0;

    count = 1;
    while (count < argc)
    {
        if (check_num(argv[count]))
        {
            str_to_int = atoi(argv[count]);
            sum += str_to_int;
        }
        else
        {
            printf("Error\n");
            return (1);
        }

        count++;
    }

    printf("%d\n", sum);

    return (0);
}
