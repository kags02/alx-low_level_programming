#include <stdio.h>
/**
* main - determines if a number is positive,negative or zero.
* return: always 0 (success)
*/
int main(void)
{
char c;
int d;
c='a';
d=0;
while (d<0)
{ putchar(d+'0');
d++;
}
while (c <= 'f')
{ putchar(c);
c++;
}
putchar('\n');
return (0);
}
