#include "lists.h"

/**
 * free_listint - frees the linked list
 * @head: address of forst node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr1, *ptr2;

	ptr1 = head;
	while (ptr1 != NULL)
	{
		ptr2 = ptr1->next;
		free(ptr1);
		ptr1 = ptr2;
	}
}
