/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
    int i;

    /* If the first character of the string is a lowercase letter, capitalize it */
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 'a' - 'A';

    /* Iterate over each character in the string */
    for (i = 1; s[i] != '\0'; i++)
    {
        /* If the current character is a separator of words, capitalize the next character */
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
            s[i] == ',' || s[i] == ';' || s[i] == '.' ||
            s[i] == '!' || s[i] == '?' || s[i] == '"' ||
            s[i] == '(' || s[i] == ')' || s[i] == '{' ||
            s[i] == '}')
        {
            /* If the next character is a lowercase letter, capitalize it */
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] -= 'a' - 'A';
        }
    }

    /* Return a pointer to the modified string */
    return (s);
}

