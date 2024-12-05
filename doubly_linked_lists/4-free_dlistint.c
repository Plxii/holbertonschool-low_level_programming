#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the list.
 *
 * Return: Nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	dlistint_t *i;

	while (head != NULL)
	{
		i = ptr->next;
		free(ptr);
		ptr = i;
	}
}
