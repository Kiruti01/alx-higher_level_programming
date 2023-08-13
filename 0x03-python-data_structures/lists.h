#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - Prints all elements of a linked list of integers
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h);

/**
 * add_nodeint_end - Adds a new node at the end of a linked list of integers
 * @head: A pointer to a pointer to the head of the linked list
 * @i: The integer value to be added to the new node
 *
 * Return: A pointer to the newly added node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * free_listint - Frees a linked list of integers
 * @head: A pointer to the head of the linked list
 */
void free_listint(listint_t *head);

/**
 * insert_node - Inserts a new node with a given integer value into a sorted linked list
 * @head: A pointer to a pointer to the head of the linked list
 * @number: The integer value to be inserted into the linked list
 *
 * Return: A pointer to the newly inserted node, or NULL on failure
 */
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
