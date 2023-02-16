#include <stdio>
/**
 * main - A program that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)signof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)signof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)signof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)signof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)signof(f));
return (0);
}
