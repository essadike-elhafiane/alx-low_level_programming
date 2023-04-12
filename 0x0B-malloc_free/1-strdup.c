#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *a;
	int i, r = 0;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;

	a = malloc(sizeof(char) * (i + 1));
	if (a == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		a[r] = str[r];

	return (a);
}
