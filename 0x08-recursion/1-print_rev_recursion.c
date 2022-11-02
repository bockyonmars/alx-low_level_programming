#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @t: string to print
 */

void _print_rev_recursion(char *t)
{
	if (*t)
	{
		_print_rev_recursion(t + 1);
		_putchar(*t);
	}
}
