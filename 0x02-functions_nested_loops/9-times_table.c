#include "main.h"
/**
 * times_table - prints times table, starting with 0
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int j, k, n;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			n = j * k;
			if (k == 0)
			{
				_putchar(k + '0');
			}
			if (n < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
