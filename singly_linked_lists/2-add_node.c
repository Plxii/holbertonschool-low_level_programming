#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - Function that adds a new node at
 * the beginning of a list_t list.
 * @head: Double pointer to the head.
 * @str: String to be added to the new node.
 *
 * Return: The adress of the new element or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = dup;
	new->len = strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
