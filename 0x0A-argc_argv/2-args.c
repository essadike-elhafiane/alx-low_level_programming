#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int i;

	for (i = 0; i < ac; i++)
		printf("%s\n", av[i]);
	return (0);
}
