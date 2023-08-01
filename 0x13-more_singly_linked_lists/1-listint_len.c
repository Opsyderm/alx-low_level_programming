#include "lists.h"

/**
 * listint_len - this will return the number of elements in a linked lists
 * @h: linked list of the type of listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

