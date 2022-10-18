#include "main.h"

/**
 * _isalpha - returns 1 if c is a letter, where lowercase or uppercase
 *
 *@c: Int to print
 *
 * Return: returns 0 (success)
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
