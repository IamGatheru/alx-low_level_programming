#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: numerical argument passed
 * Return: Always 0
 */
int factorial(int n)
{
	if ((n == 1) || (n == 0))
		return (1);
	if (n >= 1)
		return (n * (factorial(n - 1)));
	else
		return (-1);
}
