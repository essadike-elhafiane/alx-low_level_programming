#include "lists.h"

/**
 * listint_len - singly list function
 * That returns the number of elements in a linked listint_t list
 * @h: listint_h member passed as parameter
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = (*h).next;
	}
	return (len);
}
