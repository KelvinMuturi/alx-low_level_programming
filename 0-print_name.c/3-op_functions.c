#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the summation of two numbers.
 * @a: The number that comes first
 * @b: The number that comes second
 *
 * Return: The summation of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the result of the subtraction.
 * @a: The number that comes first.
 * @b: The number that comes second.
 *
 * Return: The result of subtracting b from a.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the result of multiplying two numbers.
 * @a: The number that comes first.
 * @b: The number that comes second.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of two numbers.
 * @a: The number that comes first.
 * @b: The number that comes second.
 *
 * Return: The result of dividing a with b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder after dividing of two numbers.
 * @a: The number that comes first.
 * @b: The number that comes second.
 *
 * Return: The remainder after dividing a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
