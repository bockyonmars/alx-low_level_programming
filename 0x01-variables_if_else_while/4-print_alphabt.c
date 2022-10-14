#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: returns 0 when everything works
 *
 */

int main(void)
{
	int n;

	for (n = 97; n <= 122; ++n)
	{
		if (n != 101 && n != 133)
		{
			putchar(n);
		}
	}
	putchar(10);
	return (0);
}
