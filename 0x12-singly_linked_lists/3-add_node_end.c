#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - As name suggests, it Adds a new node at end.
 * @head: pointer to the pointer to the address at the beginning of list
 * @str: string to be added
 *
 * return: the address of last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr_trav, *ptr_new;
	unsigned int len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;

	ptr_new = malloc(sizeof(list_t));
	if (ptr_new == NULL)
	{
		free(ptr_new);
		return (NULL);
	}
	ptr_new->str = strdup(str);
	if (ptr_new->str == NULL)
	{
		free(ptr_new);
		return (NULL);
	}
	ptr_new->len = len;
	ptr_new->next = NULL;/*cuz it's last node*/

	if (*head == NULL)
	{
		*head = ptr_new;
		return (ptr_new);
	}
	ptr_trav = *head;
	while (ptr_trav->next)
	{
		ptr_trav = ptr_trav->next;
	}
	ptr_trav->next = ptr_new;
	return (ptr_new);/*reutun address to (data) last node*/
}
