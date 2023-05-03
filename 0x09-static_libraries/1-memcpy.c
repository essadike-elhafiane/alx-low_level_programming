/**
 *_memcpy - copies memory area
 *@dest: arg1
 *@src: arg2
 *@n: arg3
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = src;
	char *b = dest;

	while (n-- > 0)
	{
		*b++ = *a++;
	}
	return (dest);
}
