#include "main.h"
/**
 *get_bit - returns the value of a bit at a given index
 *@n: num
 *@index: index
 *Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int b;

	if (index > 64)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
