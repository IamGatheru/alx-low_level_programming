#include <stdio.h>
/**
 * main - Prints 0 to 9
 * Return: Always 0 (success)
 */
int main(void)
{
	int  b;

	for (b = 0; b < 10; b++)
	{
		putchar(b + '0');
	}
	putchar('\n');
	return (0);
}
