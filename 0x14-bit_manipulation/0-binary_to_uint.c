#include "main.h"

/**
 * binary_to_uint - changes binary to integer.
 * @b: pointer to string of 0 and 1 chars.
 * Return: if b is NULL or contains chars not 0 or 1 - 0.
 * otherwise - the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, f;
	int x = 0;

	if (b[x] == '\0')
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] < '2')
		{
			f = b[x] - '0';
			n = n * 2 + f;
		}
		else
		return (0);
		x++;
	}
	return (n);
}
