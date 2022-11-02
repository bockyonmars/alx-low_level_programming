#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @t: string to calculate the length of
 * Return: length of the string
 */

int _strlen_recursion(char *t)
{
	if (*t == '\0')
		return (0);
	return (1 + _strlen_recursion(t + 1));
}
