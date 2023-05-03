#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array n char c
 * @size: size of array
 * @c: char to assign
 * Description: create array  char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (!size)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (!s)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
