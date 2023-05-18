#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add node at beginning of a dlistint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
dlistint_t *add_nodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
