/**
 *_isalpha -  checks for alphabetic character
 *
 *@c: The character
 *
 *Return: 0 or 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
