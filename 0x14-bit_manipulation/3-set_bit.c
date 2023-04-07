#include "main.h"
/**
 * set_bit - set bit at given index to 1.
 * @n: pointer to int n.
 * @index: the bit to change.
 * Return: 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int d, t = 1;
	unsigned long int g = 0, r = 0;
	long unsigned int f = 0, h = 0;
	long unsigned int s;

	s = *n;
	while (s != 0)
	{
		d = s % 2;
		g = d * t + g;
		s = s / 2;
		t = t * 10;
		h++;
	}
	t = 1;
	while (g > 0 || f <= index || index >= h)
	{
		d = g % 10;
		if (f == index)
			d = 1;
		r = d * t + r;
		g = g / 10;
		t = t * 2;
		if (index > h && f == index)
			break;
		f++;
	}
	*n = r;
	return (1);
}
