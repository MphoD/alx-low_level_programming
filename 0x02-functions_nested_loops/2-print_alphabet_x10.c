#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase alphabet 10 times 
 */

void print_alphabet_x10(void)
{
	char numb, letter;

	for (numb = 0; numb <= 9; numb++)
	{
		for (letter  = 'a'; letter <= 'z'; letter++);
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
