#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: singly linked list
 * @index: index of the node, starting at 0
 * Return: the nth node of a linked list, NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i != index)
	{
		if (head->next)
		{
			head = head->next;
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
