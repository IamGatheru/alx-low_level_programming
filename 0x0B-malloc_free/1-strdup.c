#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a duplicated string str
 * @str: Duplicated string
 * Return: NULL if str == NULL or pointer to duplicated string
 */

char *_strdup(char *str)
		
{
		
	char *str1;
		
	int i, size = 0;
		

		
	if (str == NULL)
		
		return (NULL);
		
	i = 0;
		
	while (str[i] != '\0')
		
		i++;
		

		
	str1 = malloc(sizeof(char) * (i + 1));
		

		
	if (str1 == NULL)
		
		return (NULL);
		

		
	for (size = 0; str[size]; size++)
		
		str1[size] = str[size];
		

		
	return (str1);
		
}
