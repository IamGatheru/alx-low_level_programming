#include "main.h"
/**
 * _islower - checks for lowercase character
 *@c: the character to filter
 * Return: Always 1 (success) otherwise 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

