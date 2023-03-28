/**
 *rev_string - reverses a string
 *
 *@s: arg
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char str;

	i = j = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (i - 1 >= j)
	{
		str = s[i - 1];
		s[i - 1] = s[j];
		s[j] = str;
		i--;
		j++;
	}
}
