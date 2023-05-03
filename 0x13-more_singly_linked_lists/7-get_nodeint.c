#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node required
 *
 * Return: the address of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *cursor = head;

	while (cursor && i < index)
	{
		cursor = cursor->next;
		i++;
	}

	return (cursor ? cursor : NULL);
}
