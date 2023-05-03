/**
 *swap_int - swaps the values of two integers
 *@a: arg2
 *@b: arg1
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
