#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @g: pointer to pointer we need to set to
 * @t: string to set
 */

void set_string(char **g, char *t)
{
	*g = t;
}
