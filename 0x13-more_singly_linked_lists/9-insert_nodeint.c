#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node in a certain position in the list
 * @head: the address of the first node
 * @idx: index of the wanted position for node
 * @n: the data to be in the nwo node
 *
 * Return: pointer at the nwe node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *add;
	unsigned int i;

	if (*head == NULL || idx <= 0)
		return (NULL);
	trav = *head;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;

	for (i = 0; i < (idx - 1) && trav != NULL; i++)
		trav = trav->next;
	add->next = trav->next;/*pointer to node after added one*/
	trav->next = add;/*prior to added node points to it*/

	return (add);

}
