#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
	count++;
	}
	return (count);
}
