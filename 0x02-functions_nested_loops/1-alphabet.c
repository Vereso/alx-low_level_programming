#include <stdio.h>
/**
 * main - Entry point
 *
 * description - print_alphabet prints the alphabet using putchar
 *
 * Return: 0(success)
 */

void print_alphabet(void)
{
	char letter;
	
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
