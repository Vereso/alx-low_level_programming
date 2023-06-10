#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @ragv: array of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int cents, coins, quarters, dimes, nickels, pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = 0;
	quarters = cents / 25;
	coins += quarters;
	cents %= 25;
	dimes = cents / 10;
	coins += dimes;
	cents %= 10;
	nickels = cents / 5;
	coins += nickels;
	cents %= 5;
	pennies = cents;
	coins += pennies;

	return (0);
}
