#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of
 * a listint_t linked list.
 *
 * @head: Parameter
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
	sum = sum + head->n;
	head = head->next;
	}

	return (sum);
}
