#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - Function that add
 * a new node at the end of list_t.
 * @head: Double pointer to the head of the list.
 * @str: String to be added to the new node.
 *
 * Return: The adress of new element or NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current;
	list_t *new_node;
	int i;

	current = *head;
	while (current && current->next != NULL)
	{
		current = current->next;
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = i;
	new_node->next = NULL;

	if (current)
	{
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}
	return (new_node);
}
