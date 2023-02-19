#include <stdio.h>
/**
 * main: print combinations of two-digit numbers
 *
 * return: always 0.
 */

int main(void)
{
	int i;
	int j;
	
	for (i = 0; i < 10; i++) 
	{
		for (j = i + 1; j < 10; j++) 
		{
			putchar('0' + i);
      			putchar('0' + j);
			if (i < 8 || j < 9) 
			{
				putchar(','); 
        			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

