#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two int arguments passed to main.
 * @argc: Argument count (must be equal to two)
 * @argv: Argument vector
 * Return: 0 (success) and 1 (fail)
 */

int main(int argc, char *argv[])
{
	int val, val1;

	if (argc == 3)
	{
		val = atoi(argv[1]);
		val1 = atoi(argv[2]);

		printf("%d\n", val * val1);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
