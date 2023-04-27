#include "lists.h"

/**
 * list_len - Compute the number of elements.
 * @h: singly linked list.
 * Return: number of elements in the list.
 **/

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int counter = 0;

	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
