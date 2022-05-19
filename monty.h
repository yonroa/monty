#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Functios For The Stack */
size_t print_stackint(const stack_t *h);
stack_t *add_stackint(stack_t **head, const int n);
stack_t *add_stackint_end(stack_t **head, const int n);
void delete_stackint_at_index(stack_t **head);
void call_func(char *command, stack_t **stack, unsigned int number_line);
void push_stack(stack_t **stack, unsigned int number_line);
void pall_stack(stack_t **stack, unsigned int number_line);
void nop_stack(stack_t **stack, unsigned int number_line);
void pint_stack(stack_t **stack, unsigned int number_line);
void pop_stack(stack_t **stack, unsigned int number_line);


/* Aux Functions */
char **tokener(char *str, char *delim);
int counter(char *string);
int _isdigit(char *c);

/* Free Functions */
void free_tokens(char **token);
void free_stacktint(stack_t **head);
void close_file(int status, void *arg);
void free_line(int status, void *arg);

#endif
