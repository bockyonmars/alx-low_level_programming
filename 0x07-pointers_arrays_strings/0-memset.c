#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @a: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		a[j] = b;
	}

	return (a);
}
