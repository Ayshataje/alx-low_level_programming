#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: singly linked list
 * Return: returns the sum of all the data (n), if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}}
