#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: a double pointer of lists
 *
 * Return: void
 */

void free_dlistint(dlistint_t **head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
