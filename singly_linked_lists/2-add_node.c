#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - Function that adds a new node at the end of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be added
 *
 * Return: The adress to the new elements or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}
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
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - Return length of a string.
 * @s: (int) text.
 * Return: (int) length.
 */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
