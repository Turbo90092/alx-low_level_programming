#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *code;

	code = malloc(sizeof(listint_t));

	if (code == 0)
	{
		return (0);
	{

	code->n = n;
	code->next = *head;
	*head = code;

	return (*head);
}
