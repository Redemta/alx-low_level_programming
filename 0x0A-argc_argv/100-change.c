#include "main.h"

/**
 * mincoins - function helper.
 * @amount: the amount in cents.
 * Return: min number of coins.
 */

int minCoins(int amount)
{
	int coins = 0;

	while (amount > 0)
	{
		if (amount >= 25)
		{
			amount -= 25;
			coins++;
		}
		else if (amount >= 10)
		{
			amount -= 10;
			coins++;
		}
		else if (amount >= 5)
		{
			amount -= 5;
			coins++;
		}
		else if (amount >= 2)
		{
			amount -= 2;
			coins++;
		}
		else
		{
			amount -= 1;
			coins++;
		}
	}
	return (coins);
}

/**
 * main - print min number of coins for change.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int coins;
	int amount;

	if (argc != 2)
	{
		printf("%s cents\n", argv[0]);
		return (1);
	}
	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = minCoins(amount);

	printf("%d\n", coins);

	return (0);
}



