#include "main.h"

/**
 * binary_to_uint - changes binary to integer.
 * @b: pointer to binary string.
 * Return: if b is NULL or contains chars not 0 or 1 - 0.
 * else - the result.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, f;
	int x;

	x = 0;
	n = 0;
	if (!b)
		return (0);
	while (b[x] == '0' || b[x] == '1')
	{
		n = n << 1;
		f = b[x] - '0';
		n = n + f;
		x++;
	}
	if (!b)
	return (n);
	return (0);
}
