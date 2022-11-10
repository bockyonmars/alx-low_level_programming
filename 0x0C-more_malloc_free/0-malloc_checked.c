#include "main.h"
#include <stdlib>

/**
 * malloc checked - allocates memory
 * @b - number of bytes allocated
 * Return - returns pointer allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
