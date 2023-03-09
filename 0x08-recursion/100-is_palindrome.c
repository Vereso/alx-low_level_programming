#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome.
 *
 * @s: the string to be checked.
 *
 * Return: 1 if the string is a palindrome.
 *         0 otherwise.
 */

int is_palindrome(char *s)
{
  int len = _strlen(s);
  return is_palindrome_helper(s, 0, len - 1);
}

/**
 * is_palindrome_helper - a helper function to check if a string is a palindrome.
 *
 * @s: the string to be checked.
 * @start: the starting index of the substring to be checked.
 * @end: the ending index of the substring to be checked.
 *
 * Return: 1 if the substring is a palindrome.
 *         0 otherwise.
 */

int is_palindrome_helper(char *s, int start, int end)
{
  if (start >= end)
  {
    return 1;
  }
  else if (s[start] != s[end])
  {
    return 0;
  }
  else
  {
    return is_palindrome_helper(s, start + 1, end - 1);
  }
}

/**
 * _strlen - returns the length of a string.
 *
 * @s: the string whose length is to be calculated.
 *
 * Return: the length of the string.
 */

int _strlen(char *s)
{
  int len = 0;
  while (*s != '\0')
  {
    len++;
    s++;
  }
  return len;
}

