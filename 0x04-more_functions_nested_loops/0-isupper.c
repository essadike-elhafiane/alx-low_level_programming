#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the issupper.
 *
 * @c : input of function
 * Return: 1 if is supper else return 0.
 */

int _isupper(int c)
{
	if ('A' >= c && 'Z' <= c)
		return (1);
	return (0);
}
