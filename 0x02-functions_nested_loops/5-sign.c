#include "main.h"

/**
 * print_sign - returns 0 letter not lowercase, 1 letter lowercase
 *
 * @n: int to print
 *
 * Return: returns 0 (success)
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else if (n > 0)
	{
		_putchar ('+');
		return (1)
	}
	
	else
	{
		_putchar ('-');
		return (-1);
	}
}
