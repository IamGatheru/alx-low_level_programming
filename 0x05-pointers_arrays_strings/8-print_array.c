#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array followed by a new line
 * @n: the number of elements of an array to be printed
 * @a: Array
 * Numbers must be separated by a comma followed by a space
 * Return: Always 0 (success)
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d, ", a[i]);
		}
		if (i == n - 1)
			printf("%d\n", a[n - 1]);
	}
}
