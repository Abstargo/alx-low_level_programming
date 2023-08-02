#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Prints a string but in reverse.
 * @s: Pointer.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}
