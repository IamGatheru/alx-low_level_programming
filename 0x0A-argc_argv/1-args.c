#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * Followed by a new line
 * @argc: count
 * @argv: strings
 * Return: 0
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
		j += i;
	_putchar(i + '0');
	_putchar('\n');
	return (0);
}
