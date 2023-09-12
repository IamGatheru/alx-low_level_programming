#include "main.h"
/**
 * _abs - computes absolute value of an integer
 *@n: parameter
 * Return: Always 0(success)
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return ((-1) * (n));
	}
}

