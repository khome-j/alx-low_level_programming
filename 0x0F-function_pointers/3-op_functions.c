#include "3-calc.h"


/**
 * op_add - a function that adds two integers
 * @a: integer
 * @b: integer
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtract two integers
 * @a: the integer
 * @b: the integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - a function that divides two numbers
 * @a: integer
 * @b: integer
 *
 * Return: the division between a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - a function that returns the remainder of the division of two integers
 * @a: the integer
 * @b: the integer
 *
 * Return: the remainder of the division of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
