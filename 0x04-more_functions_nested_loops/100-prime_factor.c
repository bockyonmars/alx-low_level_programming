#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int x;
	long int prime;
	long int y;

	x = 612852475143;
	prime = -1;

	while (x % 2 == 0)
	{
		prime = 2;
		x /= 2;
	}

	for (y = 3; y <= sqrt(x); y = y + 2)
	{
		while (x % y == 0)
		{
			prime = y;
			x = x / y;
		}
	}

	if (x > 2)
		prime = x;

	printf("%ld\n", prime);

	return (0);
}
