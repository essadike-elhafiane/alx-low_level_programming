#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that print content of list and return its len.
 * @h: head of linkedlist.
 * Description: display content of list and return its len.
 * Return: len of linkedlist.
 */


size_t print_listint(const listint_t *h)
{
	size_t	len;

	len = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}

