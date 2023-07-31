#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the first node in the list
 * @head: pointer to address of first node
 *
 * Return: data in the new address of head
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int num;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = ptr->next;
	num = ptr->n;/*strored in num to make sure space is freed before terminating*/
	free(ptr);
	return (num);
}
