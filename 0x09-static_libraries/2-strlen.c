#include "main.h"

/**
 * _strlen - returns length of a string
 * *@s: The string
* Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
