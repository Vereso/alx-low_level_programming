#include <stdio.h>
/**
 * main: prints hexadecimal digits
 *
 * return: always 0 (success)
 */

/**
 * main - the for loop counts 0-9 and 10-15 decimal equivalent as a-f
 */

int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else if (i >= 10)
		{
			putchar(i - 10 + 'a');
		}
	}
		putchar('\n');
		return (0);
}
