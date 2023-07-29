#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees space allocated to the list and its nodes
 * @head: pointer to address of first node
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
