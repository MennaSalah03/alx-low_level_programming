#include "lists.h"
/**
 * listint_len - finds no. of linked elements
 * @n: address to the first node in list
 *
 * Return: the number of linked elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int len = 0;

	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		len++;
	}
	return (len);
}
