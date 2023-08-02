#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Print a string, followed by a new line.
 * @s: Pointer
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
