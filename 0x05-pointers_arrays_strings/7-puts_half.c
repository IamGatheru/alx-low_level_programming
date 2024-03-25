#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: string
 * Return: Always 0 (success)
 */
void puts_half(char *str)
{
	int len, n;

	len = 0;

    while (str[len] != '\0')
    {
      len++;
    }
    if (len % 2 == 0)
      n = len / 2;
    else if (len % 2 == 1)
      n = (len - 1) / 2;

   for (; n < len; n++)
    {
		_putchar(str[n]);
    }
	_putchar('\n');
}
