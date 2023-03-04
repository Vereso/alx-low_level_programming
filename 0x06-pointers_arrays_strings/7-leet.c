/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *s)
{
    int i, j;
    char *letters = "aeotlAEOTL";
    char *replacements = "4307104310";

    /* Iterate over each character in the string */
    for (i = 0; s[i] != '\0'; i++)
    {
        /* Iterate over each letter to replace */
        for (j = 0; letters[j] != '\0'; j++)
        {
            /* If the current character matches a letter to replace, replace it with the corresponding digit */
            if (s[i] == letters[j])
                s[i] = replacements[j];
        }
    }

    /* Return a pointer to the encoded string */
    return (s);
}

