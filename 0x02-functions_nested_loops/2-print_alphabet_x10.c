#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times, followed by a new line
 */
void print_alphabet_x10(void)
{
    char letter = 'a';
    int i = 0;

    while (i < 10)
    {
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }

        letter = 'a'; /* reset letter to 'a' for next iteration */
        _putchar('\n');
        i++;
    }
}

