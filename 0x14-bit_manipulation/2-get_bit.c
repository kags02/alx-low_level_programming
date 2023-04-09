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
	unsigned int f;
	unsigned int d;

	d = 0;
	f = 0;
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	if (n == 0)
		return (0);
	while (n > 0)
	{
		d = n % 2;
		if (f == index)
		{
			if (d == 1)
				return (1);
			else 
				return (0);
		}
		else if (f > index)
			return (0);
		n = n >> 1;
		f++;
	}
	return (-1);
}
