#include "lists.h"
#include <stdlib.h>

/**
 * free_listsint2 - function that frees a list listint_t
 * @head: a double pointer of lists
 *
 * return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;

	}
}
