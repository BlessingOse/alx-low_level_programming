#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: points to the first node
 * @n: date to be inserted
 *
 * Return: pointer to the new node, NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
	{

		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);

}
