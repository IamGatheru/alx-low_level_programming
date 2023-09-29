#include "main.h"
/**
 * main - prints function's name followed by a new line
 * @argc: argument count
 * @argv: array of character arguments
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			_putchar (argv[i][j]);
		_putchar (' ');
	}
	_putchar ('\n');

	return (0);
}
