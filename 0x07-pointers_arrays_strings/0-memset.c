#include "main.h"

/*
* _memset : function that take a string and set c in string 
* 
*
*@b : is pointer to string
*@c : caracter
*@len : is size of bit set in string
*
*return : return string 
*/

void *_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*m;

	i = 0;
	m = (unsigned char *)b;
	while (i < len)
		m[i++] = (unsigned char)c;
	return (m);
}
