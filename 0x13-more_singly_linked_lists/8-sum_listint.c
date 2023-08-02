#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - gives the sum of all the numbers in the list
 * @head: the address to first node in the list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;
	
	if (head == NULL || *head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
