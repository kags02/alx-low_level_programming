#include "main.h"
/**
 * get_bit - returns the number at a bit.
 * @n: the number to use.
 * @index: index to check the bit.
 * Return: the value of bit at index
 *          :-1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int d, f;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	d = 1 << index;
	f = d & n;
	if (f == 0)
		return (0);
	return (1);
}
