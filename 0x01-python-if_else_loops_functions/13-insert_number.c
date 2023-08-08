#include "lists.h"

/**
 * insert_node - Inserts a new node with a given integer value into a sorted linked list
 * @head: A pointer to a pointer to the head of the linked list
 * @number: The integer value to be inserted into the linked list
 *
 * Return: A pointer to the newly inserted node, or NULL on failure
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
