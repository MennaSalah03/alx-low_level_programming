#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to te beginning of linked list
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	if (*head == NULL)
		return (NULL);
	ptr1 = NULL;
	ptr2 = NULL;
	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr1;
		ptr1 = *head;
		*head = ptr2;
	}
	*head = ptr1;
	return (*head);
}
