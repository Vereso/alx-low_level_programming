#include "main.h"
/**
 * print_square - prints a square of size n in the terminal
 *
 * @n: the size of the square
 */
void print_square(int n)
{
    int i, j;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}

