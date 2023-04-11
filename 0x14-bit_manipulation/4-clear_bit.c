#include "main.h"
/**
 * clear_bit - set bit at given index to 0.
 * @n: pointer to int n.
 * @index: the bit to change.
 * Return: 1 if it worked , -1 if an error happens.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int d, e = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	if ((*n >> index & 1) == 1)
		*n = *n - d;
	return (e);
}
