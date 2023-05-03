#include <stddef.h>
/**
 *_strchr - locates a character in a string
 *@s: arg1
 *@c: arg2
 *Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
