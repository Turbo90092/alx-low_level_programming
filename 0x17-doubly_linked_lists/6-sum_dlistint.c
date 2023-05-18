#include "lists.h"
#include <stdlib.h>

/**
 * pop_dlistint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_dlistint(dlistint_t **head)
{
	dlistint_t *start;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
