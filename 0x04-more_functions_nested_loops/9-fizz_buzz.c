#include <stdio.h>

/**
 * main - prints numbers from 0-100
 *
 * description- prints numbers from 0-100 while vhecking for divisibility by 3 and/or 5
 *
 * Return: 0
 */

int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return (0);
}

