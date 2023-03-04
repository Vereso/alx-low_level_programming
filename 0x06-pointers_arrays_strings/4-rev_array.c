/**
 * reverse_array - Reverses the content of an array of integers
 * @a: The array of integers
 * @n: The number of elements in the array
 */
void reverse_array(int *a, int n)
{
    int i, j, temp;

    /* Swap the first and last element, then the second and second-to-last element,
     * and so on, until the middle of the array is reached */
    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

