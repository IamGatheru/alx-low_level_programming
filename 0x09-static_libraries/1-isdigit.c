#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: character parameter
 * Return: 1 (c is a digit) 0(c not a digit)
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
