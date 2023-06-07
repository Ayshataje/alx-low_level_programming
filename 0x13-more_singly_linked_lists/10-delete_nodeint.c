#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: singly linked list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp, *t;

	t = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = t->next;
		free(t);
		return (1);
	}
	i = 0;
	while (i != (index - 1))
	{
		if (!t || !(t->next))
			return (-1);
		i++;
		t = t->next;
	}
	tmp = t->next;
	t->next = tmp->next;
	free(tmp);
	return (1);
}
