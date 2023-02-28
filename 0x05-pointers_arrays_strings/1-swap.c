/**
 * swap_int - Swaps the values of two integers using pointers
 *
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

