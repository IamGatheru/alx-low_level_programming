#include "main.h"
/**
 * print_rev - prints string in reverse, followed by a new line
 * @s: string
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;

	while (s[len] != 0)
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
