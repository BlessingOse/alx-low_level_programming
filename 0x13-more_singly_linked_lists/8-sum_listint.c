#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in the list
 * @head: beginning of the link
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
