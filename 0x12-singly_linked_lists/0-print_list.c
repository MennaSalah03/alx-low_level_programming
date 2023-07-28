#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements in alist_t list
 * @h: pointer to next node
 *
 * Return: the number of nodes(unsigned)
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	unsigned int  count;

	ptr = h;
	for (count = 0; ptr != NULL ; count++)
	{
		if (ptr->str == NULL)
			printf("[%u] (nil)", 0);
		printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;;
	}
	return (count);
}
