#include "lists.h"
#include <stdlib.h>

/**
 * pop_dlistint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
