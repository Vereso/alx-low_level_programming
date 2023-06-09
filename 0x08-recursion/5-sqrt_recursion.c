#include "main.h"

/**
 * is_perfect_square - check if x is a perfect square of n
 * @n: the number to find the square root of
 * @x: the possible square root
 * Return: x if it i a [erfect squarte of n, -1 otherwise 
 */
int is_perfect_square(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (is_perfect_square(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of 
 * Return: the natural square of n, oor -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return(is_perfect_square(n, 0));
}

