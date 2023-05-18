#include "lists.h"

/**
 * free_dlistint - free list
 *
 * @head: pointer to the first node of the list
 *
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	/*iterate through each node in list*/
	while ((current = head) != NULL)
	{
		/*set head as the next node*/
		head = head->next;
		free(current);
	}
}
