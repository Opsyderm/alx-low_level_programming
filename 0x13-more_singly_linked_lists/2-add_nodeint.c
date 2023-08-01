#include "lists.h"

/**
 * add_nodeint - this will add a new node at the beginning of a linked list
 * @head: this will point to the first node in the list
 * @n: this is the data to insert in that new node
 *
 * Return: pointer to the new node, or void if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
