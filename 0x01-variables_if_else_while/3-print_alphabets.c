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
	char ch = 'a';
	char cb = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cb <= 'Z')
	{
		putchar(cb);
		cb++;
	}
	putchar('\n');
	return (0);
}
