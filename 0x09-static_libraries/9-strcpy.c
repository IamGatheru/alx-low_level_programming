#include "main.h"
/**
 * _strcpy - copies the contents of a string and the '\0'
 * @dest: new array that accomodates the old string
 * @src: Original string
 * Return: Always 0(success)
 */
char *_strcpy(char *dest, char *src)
{
	/*initialize the counter and the variables*/
	int i = 0;
	int len = 0;

	while (*(src + len) != '\0')
		len++;
	for (; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}
