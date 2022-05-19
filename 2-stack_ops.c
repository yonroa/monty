#include "monty.h"

/**
 * swap_stack - swaps the top two elements of the stack
 * @stack: the satck to be analize
 * @number_line: the number line
 * Return: The new stack
 */
void swap_stack(stack_t **stack, unsigned int number_line)
{
	stack_t *tmp = *stack;
	int copy;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", number_line);
		exit(EXIT_FAILURE);
	}
	copy = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = copy;
}

/**
 * add_stack - adds the top two elements of the stack
 * @stack: Stack to be swaped
 * @number_line: Line of the file
 */
void add_stack(stack_t **stack, unsigned int number_line)
{
	stack_t *tmp = *stack;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", number_line);
		exit(EXIT_FAILURE);
	}
	tmp->next->n = tmp->next->n + tmp->n;
	delete_stackint_at_index(stack);
}

/**
 * sub_stack - subtracts the top element of the stack
 * from the second top element of the stack
 * @stack: stack to be analize
 * @number_line: The line to be used to print error
 * Return: The new stack
 */
void sub_stack(stack_t **stack, unsigned int number_line)
{
	stack_t *tmp = *stack;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", number_line);
		exit(EXIT_FAILURE);
	}
	tmp->next->n = tmp->next->n - tmp->n;
	delete_stackint_at_index(stack);
}

/**
 * div_stack - divides the second top element
 * of the stack by the top element of the stack
 * @stack: stack to be analize
 * @number_line: The line to be used to print error
 * Return: The new stack
 */
void div_stack(stack_t **stack, unsigned int number_line)
{
	stack_t *tmp = *stack;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", number_line);
		exit(EXIT_FAILURE);
	}
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", number_line);
		exit(EXIT_FAILURE);
	}
	tmp->next->n = tmp->next->n / tmp->n;
	delete_stackint_at_index(stack);
}

/**
 * mul_stack - multiplies the second top element
 * of the stack with the top element of the stack
 * @stack: stack to be analize
 * @number_line: The line to be used to print error
 * Return: The new stack
 */
void mul_stack(stack_t **stack, unsigned int number_line)
{
	stack_t *tmp = *stack;

	if (!tmp || !tmp->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", number_line);
		exit(EXIT_FAILURE);
	}
	tmp->next->n = tmp->next->n * tmp->n;
	delete_stackint_at_index(stack);
}
