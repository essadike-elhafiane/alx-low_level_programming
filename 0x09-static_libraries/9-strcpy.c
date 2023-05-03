/**
 *_strcpy - copys str to another
 *@dest: arg1
 *@src: arg2
 *
 *Return:  dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
