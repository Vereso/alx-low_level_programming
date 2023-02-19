#include <stdio.h>
/**
 * main: prints the alphabet in reverse
 *
 * return: always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
