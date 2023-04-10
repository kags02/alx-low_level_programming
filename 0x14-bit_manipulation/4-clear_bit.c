#include "main.h"
/**
 * clear_bit - set bit at given index to 1.
 * @n: pointer to int n.
 * @index: the bit to change.
 * Return: 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
