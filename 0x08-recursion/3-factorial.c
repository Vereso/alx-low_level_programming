#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *
 * @n: the number whose factorial is to be calculated.
 *
 * Return: the factorial of the given number.
 *         -1 if the given number is less than 0.
 */

int factorial(int n)
{
  if (n < 0)
  {
    return -1;
  }
  else if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

