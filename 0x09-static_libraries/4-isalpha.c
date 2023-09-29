#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: letter identifier
 * Return: 1(True), 0(False)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
