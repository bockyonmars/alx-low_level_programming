#include "main.h"

/**
 * *_memcpy - copies memory area
 * @d: destination memory area
 * @s: memory area to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *d, char *s, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}

	return (d);
}
