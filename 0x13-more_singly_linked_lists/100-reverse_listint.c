#include "lists.h"

/**
 * reverse_listint - function reverses a linked list.
 * @head: pointer to pointer to the node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}

	*head = current;

	return (*head);
}
