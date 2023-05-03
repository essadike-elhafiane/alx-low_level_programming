/**
 *_strlen - returns the length of a string
 *
 *@s: arg
 *
 *Return: len
 */
int _strlen(char *s)
{
	int len, i;

	len = i = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
