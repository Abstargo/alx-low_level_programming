#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char letter;

	for (int i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	}

	_putchar('\n');
}
