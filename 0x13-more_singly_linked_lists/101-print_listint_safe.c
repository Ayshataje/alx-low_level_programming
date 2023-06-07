#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: singly linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	p = n = NULL;
	if (head)
	{
		while (*head)
		{
			n = *head;
			*head = (*head)->next;
			n->next = p;
			p = n;
		}

		*head = p;
		return (*head);
	}
	return (NULL);
}
