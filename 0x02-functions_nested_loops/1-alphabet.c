#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: returns 0 (success)
 *
 */

void print_alphabet(void)
{
	char alphabe;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');

}
