#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: head of the list
 *
 * Return: sum of the number
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *cursor = head;

	while (cursor)
	{
		sum += cursor->n;
		cursor = cursor->next;
	}

	return (sum);
}
