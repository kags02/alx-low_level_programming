#include "main.h"
/**
 * get_bit - returns the number at a bit.
 * @n: the number to use.
 * @index: the bit to use.
 * Return: the value of bit at index
 *          :1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int f;
	int d;

	f = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	while (n > 0)
	{
		d = n % 2;
		if (f == index)
			return (d);
		n = n / 2;
		f++;
	}
	return (-1);
}
