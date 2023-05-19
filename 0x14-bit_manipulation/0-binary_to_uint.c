#include "main.h"

/**
 *binary_to_uint - converts a binary number
 *@b: pointing to a string 
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '0')
			num = num << 1;
		else if (*b == '1')
			num = (num << 1) | 1;
		else
			return (0);
		b++;
	}
	return (num);
}
