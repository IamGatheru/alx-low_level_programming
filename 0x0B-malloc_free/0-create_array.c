#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initializes with
 * a specific character.
 * @size: size of the array
 * @c: character to be printed out.
 * Return: Null if size is zero, or array is NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	/*Allocate memory to str using malloc*/
	str = malloc(sizeof(char) * size);

	if (str == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
