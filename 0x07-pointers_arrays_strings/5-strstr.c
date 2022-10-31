#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @hystk: string to search in
 * @ndle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *hystk, char *ndle)
{
	int i, j;

	for (i = 0; hystk[i] != '\0'; i++)
	{
		for (j = 0; ndle[j] != '\0'; j++)
		{
			if (hystk[i + j] != ndle[j])
				break;
		}
		if (!ndle[j])
			return (&hystk[i]);
	}
	return (NULL);
}
