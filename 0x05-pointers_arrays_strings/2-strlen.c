/**
 *_strlen - returns the length of a string
 *
 *@s: arg
 *
 *Return: len
 */
int _strlen(char *s)
{
	int i;

	i = 1;
	while (*s && i++)
		s++;
	return (i - 1);
}
