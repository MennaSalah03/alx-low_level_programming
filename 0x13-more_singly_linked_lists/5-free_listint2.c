#include "lists.h"

/**
 * free_listint2 - frees the structure where the list is formed upon
 * @head: pointer to address of the first element
 *
 * return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr1 = *head, *ptr2;

	while (ptr1 != NULL)
	{
		ptr2 = ptr1->next;
		free(ptr1);
		ptr1 = ptr2;
	}
	*head = NULL;
}
