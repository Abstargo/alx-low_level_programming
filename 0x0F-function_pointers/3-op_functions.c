#include "3-calc.h"

/**
 * op_add - Returns the sum of a and b.
 * @a: First operand
 * @b: Second operand.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of a and b.
 * @a: First oprand.
 * @b: Second operand.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return ( a - b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_mul - Returns the product of a and b.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The product of a and b.
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of a by b.
 * @a: First operand.
 * @b: Second operand.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
    return (a % b);
}
