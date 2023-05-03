#include "lists.h"

/**
  * add_nodeint_end - A function that adds a node
  * at end of a listint_t list.
  *
  * @head: first parameter
  * @n: second parameter
  *
  * Return: the address of the new element or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));

	if (head == NULL)
	return (NULL);

	if (ptr == NULL)
	return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
	*head = ptr;
	return (ptr);
	}
	temp = *head;
	while (temp->next != NULL)
	{
	temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
