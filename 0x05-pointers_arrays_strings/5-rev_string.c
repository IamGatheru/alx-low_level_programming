#include "main.h"

/**
 * rev_string - reverses a string
 *@s: string
 * Return: Always 0 (success)
 */
void rev_string(char *s)
{
	char rev = s[0];
	int revv = 0;
	int i;

	while (s[revv] != '\0')
		revv++;
	for (i = 0; i < revv; i++)
	{
		revv--;
		rev = s[i];
		s[i] = s[revv];
		s[revv] = rev;
	}
}
