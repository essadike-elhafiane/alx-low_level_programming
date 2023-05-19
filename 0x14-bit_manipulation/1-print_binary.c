#include "main.h"
/**
 *print_binary - prints the binary representation of a number
 *@n: number
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while ((m & n) == 0)
		m >>= 1;
	while (m)
	{
		if ((n & m) == 0)
			_putchar('0');
		else
			_putchar('1');
		m >>= 1;
	}
}

