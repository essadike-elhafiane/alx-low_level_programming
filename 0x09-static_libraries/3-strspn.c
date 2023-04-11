/**
 *_strspn - gets the length of a prefix substring
 *@s: arg1
 *@accept: arg2
 *Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len;

	i = j = len = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				j = 0;
				i++;
				len++;
			}
			else
			{
				j++;
			}
		}
		break;
	}
	return (len);
}
