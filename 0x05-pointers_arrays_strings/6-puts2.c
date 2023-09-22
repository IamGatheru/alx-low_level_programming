#include "main.h"
/**
 * puts2 - prints every other char in a string follwed by /0.
 * @str: string character
 * Return: Always 0 (success)
 */
void puts2(char *str)
{
	int i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
