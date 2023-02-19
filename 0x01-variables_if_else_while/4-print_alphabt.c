#include <stdio.h>
/**
 * main: entry point
 *
 * return: always zero (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter = 'z'; letter++) 
	{
		if (letter != 'q' && letter != 'e') 
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
