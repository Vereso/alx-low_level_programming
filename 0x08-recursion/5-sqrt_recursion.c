#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the number whose square root is to be calculated.
 *
 * Return: the natural square root of the given number.
 *         -1 if the given number does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
  if (n < 0)
  {
    return -1;
  }
  else if (n == 0 || n == 1)
  {
    return n;
  }
  else
  {
    return _sqrt_helper(n, 1, n);
  }
}

/**
 * _sqrt_helper - a helper function to calculate the square root.
 *
 * @n: the number whose square root is to be calculated.
 * @start: the starting point for the search.
 * @end: the ending point for the search.
 *
 * Return: the natural square root of the given number.
 *         -1 if the given number does not have a natural square root.
 */

int _sqrt_helper(int n, int start, int end)
{
  int mid;

  if (start <= end)
  {
    mid = (start + end) / 2;
    if (mid * mid == n)
    {
      return mid;
    }
    else if (mid * mid < n)
    {
      return _sqrt_helper(n, mid + 1, end);
    }
    else
    {
      return _sqrt_helper(n, start, mid - 1);
    }
  }

  return -1;
}

