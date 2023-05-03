/**
 *_atoi - convert str to int
 *@s: arg
 *
 * Return: num
 */
int _atoi(char *s)
{
	unsigned int i = 0;
	int j, k;

	k = 1;
	j = 0;
	while (s[j])
	{
		if (s[j] == '-')
		{
			k *= -1;
		}
		else if (s[j] >= '0' && s[j] <= '9')
		{
			i = (i * 10) + (s[j] - '0');
		}
		else if (i > 0)
		{
			break;
		}
		j++;
	}
	return (i * k);
}
