#include <stdio.h>
/**
 * main - entry point
 *
 * description - program that prints the alphabet 10 times
 *
 * Return: 0 (success)
 *
 * print_alphabet_x10 - runs the alphabet in lowercase repetitively for 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	char letter;

	i = 0;
	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z');
		putchar(letter);
		letter++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
