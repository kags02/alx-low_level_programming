#include "main.h"
/**
 * print any integer using only _putchar function
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
        int x,z,i,c=0,s;
	i=n;
        for (x=3;x>=1;x++)
        {
                n=n/10;
                c++;
                if ((n)==0)
                break;}
	if (i<0)
	{
		_putchar('-');
	}

        for (x=(c-1);x>=0;x--)
        {
		if ( x!=0 && x!=c)
                { int y=1;
			for (s=x;s>=1;s--)
			{ y=y*10;}
			
                        z=i/y;
			if (z<0)
			{
				_putchar(-(z%10) + '0');
			}
			else
			{
				_putchar((z%10) + '0');
			}
                }
                else
                {
		if (i<0)
		{
			_putchar(-(i%10) + '0');
		}
		else

		{
			_putchar(i%10 + '0');}
                }
        }
        
}

