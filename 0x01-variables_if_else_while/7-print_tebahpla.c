#include <stdio.h>
/**
* main - determines if a number is positive,negative or zero.
* return: always 0 (success)
*/
int main(void)
{
        char ch = 'z';
        while (ch >= 'a')
        {
         putchar(ch);
                ch--;
        }
        putchar('\n');
        return (0);
}       
