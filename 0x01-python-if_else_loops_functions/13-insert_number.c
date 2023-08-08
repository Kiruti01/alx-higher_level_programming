#include "lists.h"

/**
 * insert_node - Insrts new nde w/ gvn int val nto srtd lnkd lst
 * @head: A pointer to a pntr to head of lnkd lst
 * @number: The int val to be insrtd into the lnkd lst
 *
 * Return: A pntr to nwly insrtd nde, or NULL failure
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->i = number;

	if (node == NULL || node->i >= number)
	{
		new->nxt = node;
		*head = new;
		return (new);
	}

	while (node && node->nxt && node->nxt->i < number)
		node = node->nxt;

	new->nxt = node->nxt;
	node->nxt = new;

	return (new);
}
