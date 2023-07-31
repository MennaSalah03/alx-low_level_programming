#include "lists.h"

/**
 * print_listint - prints all inteegers in list
 * @h: address to first node
 *
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;
	const listint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		len++;
	}
	return (len);
}
