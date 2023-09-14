#include "main.h"
/**
 * more_numbers - print (0-14) 10 times
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int n;
	int ch;

	for (n = 0; n < 10; n++)
	{
		for (ch = 0; ch <= 14; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + '0');
			_putchar((ch % 10) + '0');
		}
		_putchar('\n');
	}
}
