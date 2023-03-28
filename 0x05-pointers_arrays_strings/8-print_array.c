#include <stdio.h>
/**
 *print_array - prints n elements of an array
 *@a: arg1
 *@n: arg2
 *
 *Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("\n");
}
