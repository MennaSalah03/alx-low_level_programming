#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a single-linked list
 * @h: pointer to the head
 *
 * Return: the number of elements found
 */

size_t list_len(const list_t *h)
{
	unsigned int count;
	const list_t *ptr = NULL;

	ptr = h;/*&ptr is @ list head*/
	for (count = 0; ptr != NULL; count++)
		ptr = ptr->next;/*get address of next element*/
	return (count);
}
