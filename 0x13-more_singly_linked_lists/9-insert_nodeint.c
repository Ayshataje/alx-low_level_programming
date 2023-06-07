#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: singly linked list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: data to add
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = (*head);
		*head = new;
		return (new);
	}
	i = 0;
	tmp = *head;
	while (i < idx && tmp)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
		i++;
	}
	free(new);
	return (NULL);
}
