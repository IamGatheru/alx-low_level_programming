#include "main.h"

/**
 * print_alphabet_x10 - prints a-z 10 times
 * Return:Always 0(success)
 */
void print_alphabet_x10(void)
{
	int n;
	char ch;

	n = 0;
	while (n < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		n += 1;
		_putchar('\n');
	}
}

