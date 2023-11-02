#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: count
 * @argv: vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int money, denominations[5], num_denominations, cents, i;
	/*in c89, we cannot declare and initialize at once*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	denominations[0] = 25;
	denominations[1] = 10;
	denominations[2] = 5;
	denominations[3] = 2;
	denominations[4] = 1;

	num_denominations = sizeof(denominations) / sizeof(denominations[0]);

	cents = 0;

	for (i = 0; i < num_denominations; i++)
	{
		cents += money / denominations[i];
		money %= denominations[i];
	}
	printf("%d\n", cents);
	return (0);
}

