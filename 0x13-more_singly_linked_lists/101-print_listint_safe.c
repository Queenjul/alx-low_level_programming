#include "lists.h"

/**
 * print_listint_safe -function that prints a linked list.
 * @head: list of type listint_t to print
 *
 * Return: no return.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	long int curr;

	while (head)
	{
		curr = head - head->next;
		len++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (curr > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (len);
}
