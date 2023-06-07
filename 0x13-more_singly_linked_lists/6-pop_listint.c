#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: More singly linked list
 * Return: head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if ((*head) == NULL)
		return (0);
	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
