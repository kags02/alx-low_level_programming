#include "main.h"
#include <stdio.h>


/**
 * print_binary - returns the number in binary from integer.
 * @n: unsigned integer to be changed to binary.
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int f, z = 0;

	if (n > z)
	{
		if ((n & 1) == 1)
		{
			f = 1;
		}
		else
		{
			f = 0;
		}
		if (n > 1)
		{
			print_binary(n >> 1);
			_putchar(f + '0');
		}
		else
		{
			_putchar(n + '0');
		}
	}
	else
	{
		_putchar('0');
}
}

