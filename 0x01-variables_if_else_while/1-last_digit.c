#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Main- checks the last digit of the number*/

/**
 * relational operators determine whether number is 0, >5, or 5
 * success Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i is %d and is zero\n", n, last_digit);
	}
	else if (last_digit != 0 && < 6)
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, last_digit);
	}
		return (0);
}
