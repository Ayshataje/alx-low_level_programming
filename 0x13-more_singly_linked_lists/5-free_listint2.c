#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: singly linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

	if (head == NULL)
		return;
	while (*head)
	{
		if ((*head)->next)
		{
			h = *head;
			*head = (*head)->next;
			free(h);
		}
		else
		{
			free(*head);
			*head = NULL;
		}
	}
}
