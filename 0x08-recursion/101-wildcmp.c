#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered
 *           identical, otherwise returns 0. The second string can contain the
 *           special character `*`, which can replace any string (including an empty string)
 *
 * @s1: first string to be compared
 * @s2: second string to be compared, can contain the special character `*`
 *
 * Return: 1 if the strings can be considered identical, otherwise returns 0.
 */
int wildcmp(char *s1, char *s2)
{
    /* If both strings are empty, they are considered identical */
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    /* If the second string is '*', it can match with any string (including empty string) */
    if (*s2 == '*')
    {
        /* Move past the '*' character in the second string */
        s2++;

        /* If the second string ends with '*', it can match with any remaining characters in the first string */
        if (*s2 == '\0')
            return 1;

        /* Compare the first string with every possible suffix of the second string */
        while (*s1 != '\0')
        {
            if (wildcmp(s1, s2))
                return 1;
            s1++;
        }

        /* If no match is found, the strings are not identical */
        return 0;
    }

    /* If the first character of both strings matches, compare the rest of the strings */
    if (*s1 == *s2)
        return wildcmp(s1 + 1, s2 + 1);

    /* If the first characters do not match and there is no '*', the strings are not identical */
    return 0;
}

