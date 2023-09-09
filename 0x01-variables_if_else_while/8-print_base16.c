#include <stdio.h>
/**
 * main - prints 0-9 and a-f
 * Return: Always 0 (success)
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}
	for (b = 97; b < 103; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
