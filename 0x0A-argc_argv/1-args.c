#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * Followed by a new line
 * @argc: count
 * @argv: strings
 * Return: 0
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
