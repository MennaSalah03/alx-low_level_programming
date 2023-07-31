#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the list
 * @head: pointer to address of first node
 * @n: the data of added node
 *
 * Return: the address of first node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *trav, *add;
	
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	trav->next = add;
	return (add);
}
