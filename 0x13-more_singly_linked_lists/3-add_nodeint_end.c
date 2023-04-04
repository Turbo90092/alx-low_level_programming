#include "lists.h"

/**
  * add_nodeint_end - add node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *code;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	code = malloc(sizeof(listint_t));
	if (code == NULL)
	{
		return (NULL);
	}
	code->n = n;
	code->next = NULL;
	if (*head == NULL)
	{
		*head = code;
		return (code);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = code;
return (code);
}
