#include "main.h"
#include "2-strlen"

/**
 * puts_half - puts half of int
 *
 * @str: string to split
 */
void puts_half(char *str)
{
	int i;
	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	}
	for (i = (_strlen(str) = oE) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
