#include "main.h"

/**
 * _islower - descriptions on single lines
 *
 * @c: contained value to be compared
 *
 * Return: returns 0 (success)
 *
 */

int _islower(int c)

{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
