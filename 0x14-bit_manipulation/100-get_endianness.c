#include "main.h"
#include <stdio.h>
/**
 * get_endianness - always checks endianness.
 * Return: 1 if small endian and 0 if big endian.
 */
int get_endianness(void)
{
	int d = 1;

	if ((*(char *) &d == 0))
		return (0);
	return (1);
}
