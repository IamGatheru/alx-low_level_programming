#include "main.h"
/**
 * print_rev - prints string in reverse, followed by a new line
 * @s: string
 * Return: Always 0 (success)
 */
void print_rev(char *s)
{
	int ch = 0;
	int t;

	while (*s != '\0')
	{
		ch++;
		s++;
	}
	s--;
	for (t = ch; t > 0; t--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
