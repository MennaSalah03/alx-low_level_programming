#include <stdio.h>
#include <stdlib.h>/**/
#include <string.h>/*strdup*/
#include "lists.h"

/**
 * add_node - adds a node to the head of list.
 * @head: pointer to the pointer to beginning of list.
 * @str: string stored in beginning list.
 *
 * Return: pointer to the beginning of the list or NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = NULL;
	unsigned int len;

	ptr = malloc(sizeof(list_t));/*Accounting for struct memory as whole*/
	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	if (ptr != NULL)
	{
		ptr->str = strdup(str);
		ptr->len = len;
		ptr->next = NULL;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}


