#include "monty.h"

/**
 * _rotl - rotates the first element to the bottom and  the second to the top
 * @doubly: head of the linked list
 * @line_number: line number;
 * Return: void
 */
void _rotl(stack_t **doubly, unsigned int line_number)
{
	stack_t *aux1 = NULL;
	stack_t *aux2 = NULL;
	(void)line_number;

	if (*doubly == NULL)
		return;

	if ((*doubly)->next == NULL)
		return;

	aux1 = (*doubly)->next;
	aux2 = *doubly;

	for (; aux2->next != NULL; aux2 = aux2->next)
		;

	aux1->prev = NULL;
	aux2->next = *doubly;
	(*doubly)->next = NULL;
	(*doubly)->prev = aux2;
	*doubly = aux1;
}

/**
 * _rotr - reverse the stack
 * @doubly: head of the linked list
 * @line_number: line number
 * Return: no return
 */
void _rotr(stack_t **doubly, unsigned int line_number)
{
	stack_t *aux = NULL;
	(void)line_number;

	if (*doubly == NULL)
		return;

	if ((*doubly)->next == NULL)
		return;

	aux = *doubly;

	for (; aux->next != NULL; aux = aux->next)
		;

	aux->prev->next = NULL;
	aux->next = *doubly;
	aux->prev = NULL;
	(*doubly)->prev = aux;
	*doubly = aux;
}
