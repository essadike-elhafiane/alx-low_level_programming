/**
 *_strncat - concatenates two strings
 *@dest: str1
 *@src: str2
 *@n: num
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	i = len = 0;
	while (dest[len])
	{
		len++;
	}
	while (src[i] && i < n)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
