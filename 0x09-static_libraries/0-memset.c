/**
 *_memset - fills memory with a constant byte
 *@s: arg1
 *@b: arg2
 *@n: arg3
 *Return: str
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (n-- > 0)
	{
		*a++ = b;
	}
	return (s);
}
