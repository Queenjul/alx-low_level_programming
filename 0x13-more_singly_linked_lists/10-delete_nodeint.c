#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: the address of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cursor = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cursor);
		return (1);
	}

	while (i < index - 1)
	{
		if (!cursor || !(cursor->next))
			return (-1);
		cursor = cursor->next;
		i++;
	}


	current = cursor->next;
	cursor->next = current->next;
	free(current);

	return (1);
}
