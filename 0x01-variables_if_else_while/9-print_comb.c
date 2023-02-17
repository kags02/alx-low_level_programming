#include <stdio.h>
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

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
return (0);
}

