#include <stdio.h>
/**
 * main - determines if a number is positive,negative or zero.
 * return: always 0 (success)
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
        int a;
	
	a = 0;
	while (a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar ('\n');
	return (0);
}

