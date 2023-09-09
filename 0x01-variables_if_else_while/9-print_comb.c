#include <stdio.h>
/**
 * main - prints al possible combinations of single-digit numbers
 * Return: Always
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a !=  57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
