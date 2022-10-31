#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @a: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *a)
{
	int i, j, k, f;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		f = 0;
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				k++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (f);
		}
	}

	return (0);
}
