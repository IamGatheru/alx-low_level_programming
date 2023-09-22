#include "main.h"

/**
 * rev_string - reverses a string
 *@s: string
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
	int i;
	char temp[20];
	int len = 0;

	while (s[len] != '\0')
	{
		temp[len] = s[len];
		len++;
	}
	/*temp[len] = '\0';*/

	for (i = len - 1; i >= 0; i--)
	{
		s[len - i - 1] = temp[i];
	}
}
