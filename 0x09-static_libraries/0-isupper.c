/**
 *_isupper -  checks for uppercase character
 *
 *@c: The character
 *
 *Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
