/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: The string to modify
 *
 * Return: A pointer to the modified string
 */
char *string_toupper(char *s)
{
    int i;

    /* Iterate over each character in the string */
    for (i = 0; s[i] != '\0'; i++)
    {
        /* If the character is a lowercase letter, convert it to uppercase */
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 'a' - 'A';
    }

    /* Return a pointer to the modified string */
    return (s);
}

