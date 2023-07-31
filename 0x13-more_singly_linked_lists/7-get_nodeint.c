#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeinnt_at_index - gets the node at index n
 * @n: the index
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	if (head == NULL || index == 0)
		return (NULL);
	ptr = head;
	for (i = 0; i < index && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
