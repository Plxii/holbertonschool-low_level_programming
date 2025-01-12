#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer.
 * @index: index of the node.
 * Return: if the node does not exist, return NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temph;
	unsigned int toindex = 0;

	temph = head;

	while (temph != NULL)
	{
		if (toindex == index)
		{
			return (temph);
			toindex++;
		}
		temph = temph->next;
	}
	if (toindex == 0 || toindex < index)
	{
		return (temph);
	}
	temph = head;
	return (temph->next);
}
