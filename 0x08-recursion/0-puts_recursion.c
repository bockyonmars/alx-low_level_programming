#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @t: string to print
 */

void _puts_recursion(char *t)
{
	if (*t == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*t);
	_puts_recursion(t + 1);
}
