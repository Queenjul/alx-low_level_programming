#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp;
	listint_t *current;

	tmp = head;
	current = head;
	while (head && tmp && tmp->next)
	{
		head = head->next;
		tmp = tmp->next->next;

		if (head == tmp)
		{
			head = current;
			current =  tmp;
			while (1)
			{
				tmp = current;
				while (tmp->next != head && tmp->next != current)
				{
					tmp = tmp->next;
				}
				if (tmp->next == head)
					break;

				head = head->next;
			}
			return (tmp->next);
		}
	}

	return (NULL);
}
