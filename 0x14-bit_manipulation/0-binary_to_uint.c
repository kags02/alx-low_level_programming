#include "main.h"

/**
 * binary_to_uint - changes binary to integer.
 * @b: pointer to binary.
 * Return: the integer from binary and 0 if the input is not binary.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, x = 0, f;

	if (b[x] == '\0')
		return (0);
	while (b[x] != '\0')
	{
		if (b[x] < '2')
		{
			f = b[x] - '0';
			n = n * 2 + f;
			x++;
		}
		else
			return (0);
	}
return (n);
}
