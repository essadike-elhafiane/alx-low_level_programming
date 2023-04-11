#include <stddef.h>
/**
 *_strpbrk - function that searches a string for any of a set of bytes
 *@s: arg1
 *@accept: arg2
 *Return: a pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = j = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
