#include "monty.h"

/**
 * push_stack - pushes an element to the stack
 * @stack: stack to be modified
 * @number_line: the number line
 * Return: nothing
 */
void push_stack(stack_t **stack, unsigned int number_line)
{
	char *num = strtok(NULL, "\n\t\r ");

	if (_isdigit(num) == -1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", number_line);
		free_stacktint(stack);
		exit(EXIT_FAILURE);
	}
	if (!add_stackint(stack, atoi(num)))
	{
		fprintf(stderr, "Error: malloc failed\n");
		free_stacktint(stack);
		exit(EXIT_FAILURE);
	}
}

/**
 * pall_stack - prints all the values on the stack
 * starting from the top of the stack
 * @stack: stack to be printed
 * @number_line: the number line
 * Return: The stack printed
 */
void pall_stack(stack_t **stack, unsigned int number_line)
{
	stack_t *copy;

	(void)(number_line);

	copy = *stack;
	print_stackint(copy);
}

/**
 * pint_stack - prints the value at the top of the stack,
 * followed by a new line
 * @stack: stack to be analize
 * @number_line: the number line
 * Return: the stack
 */
void pint_stack(stack_t **stack, unsigned int number_line)
{
	if (!*stack)
	{
		fprintf(stderr, "L<%u>: can't pint, stack empty\n", number_line);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}

/**
 * pop_stack - removes the top element of the stack
 * @stack: the stack to be analize
 * @number_line: line at the slack to be delete
 * Return: tne new stack
 */
void pop_stack(stack_t **stack, unsigned int number_line)
{
	if (!*stack)
	{
		fprintf(stderr, "L<%u>: can't pop an empty stack\n", number_line);
		exit(EXIT_FAILURE);
	}
	delete_stackint_at_index(stack);
}

/**
 * nop_stack - doesn’t do anything
 * @stack: the stack
 * @number_line: the number_line
 */
void nop_stack(stack_t **stack, unsigned int number_line)
{
	(void)stack;
	(void)number_line;
}
