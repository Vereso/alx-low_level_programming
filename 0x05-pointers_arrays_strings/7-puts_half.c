#include "main.h"
/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: Pointer to the string to be printed
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, i, start;

	/* Get the length of the string */
	while (str[len] != '\0')
		len++;

	/* Calculate the starting index */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	/* Print the second half of the string */
	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
