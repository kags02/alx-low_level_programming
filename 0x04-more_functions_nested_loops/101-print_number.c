#include <stdio.h>
/**
 * print any integer using only _putchar function
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_number(int i)
{
        int x,y,z,n,c=0,s;
	n=i;
        for (x=3;x>=1;x++)
        {
                i=i/10;
                c++;
                if ((i)==0)
                break;}
	if (n<0)
	{
		putchar('-');
	}

        for (x=(c-1);x>=0;x--)
        {
		if ( x!=0 && x!=c)
                { int y=1;
			for (s=x;s>=1;s--)
			{ y=y*10;}
			
                        z=n/y;
			if (z<0)
			{putchar(-(z%10) + '0');}
			else
			{putchar((z%10) + '0');}
                }
                else
                {
		if (n<0)
		{putchar(-(n%10) + '0');}
		else

		{putchar(n%10 + '0');}
                }
        }
        
}

