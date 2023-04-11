#include "main.h"
/**
 * flip_bits - returns number of bits frm one to another.
 * @n: the first number.
 * @m: the second number.
 * Return: bits from one to another number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int i = 0;

	x = n ^ m;
	for (;; i++)
	{
		if (x == 0)
		{		return (i);
		}
			x = x & (x - 1);
	}
}
