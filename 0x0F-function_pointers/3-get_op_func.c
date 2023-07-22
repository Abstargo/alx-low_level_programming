#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function based on the operator.
 * @s: The operator passed as an argument to the program.
 *
 * Return: Pointer to the function that corresponds to the operator,
 * or NULL if the operator does not match any of the expected
 * operators.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	char *operators[] = {"+", "-", "*", "/", "%"};
	int (*functions[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};

	while (*operators[i])
	{
		if (*s == *operators[i])
			return (functions[i]);
		i++;
	}

	return (NULL);
}
