#include "lists.h"

/**
 * get_dnodeint_at_index - get node at *index nth from a linked list
 *
 * @head: pointer to the first node of the list
 * @index: no of node to access
 *
 * Return: node at nth index OR NULL if node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	/*iterate thorugh nodes in list till the index nth node*/
	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	
	return (head);
}
