#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain position
 * @head: pointer to the first node in list
 * @index: index of the node we wnat to delete
 *
 * Return: 1 if deletion suciceeded and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *pre;
	unsigned int i;

	ptr = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (ptr == NULL)
			return (-1);
		pre = ptr;
		ptr = ptr->next;
	}
	pre->next = ptr->next;
	free(ptr);
	ptr = NULL;
	return (1);
}
