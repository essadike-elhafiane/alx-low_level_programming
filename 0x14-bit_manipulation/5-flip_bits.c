#include "main.h"
/**
 *flip_bits - returns num of bits need to flip to get from one num to another
 *@n: num
 *@m: num
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int res = n ^ m;

	while (res)
	{
		num += res & 1;
		res >>= 1;
	}
	return (num);
}
