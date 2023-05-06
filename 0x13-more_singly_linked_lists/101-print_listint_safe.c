#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: no return
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int tmp;

	while (head)
	{
		tmp = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (tmp > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (0);
}