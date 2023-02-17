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
	
	while (ch <= 'z')
	{
		if ((ch != 'q') && (ch != 'e'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
