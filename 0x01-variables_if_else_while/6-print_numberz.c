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
	int ch;

	ch = 0;
	while (ch < 10)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar ('\n');
	return (0);
}

