#include "lists.h"

/**
 * add_nodeint - adds node at beginning of list
 * @head:address of first node
 * @n: data added in new node
 *
 * Return: address to the first node
 */
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;

	*head = ptr;
	return (*head);
}
