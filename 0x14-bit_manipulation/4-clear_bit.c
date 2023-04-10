#include "main.h"
/**
 * clear_bit - set bit at given index to 0.
 * @n: pointer to int n.
 * @index: the bit to change.
 * Return: 1 if it worked , -1 if an error happens.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int d;
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	d = (1 << index);
	*n = *n & ~d;
	return (1);
}
