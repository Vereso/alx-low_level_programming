#include <stdio.h>
/**
 * main - entry point
 *
 * description - prints whether a number is positive or negative
 *
 * @n: the number to check
 *
 * Return: void
 */
void positive_or_negative(int n)
{
	/* Check if n is greater than or equal to zero */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
}

