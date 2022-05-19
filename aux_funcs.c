#include "monty.h"

/**
 * _isdigit - Verify if c is a digit
 * @c: Character to be verified
 *
 * Return: -1 if c is not a digit
 * 0 if is
 */
int _isdigit(char *c)
{
	if (!c || !*c)
		return (0);
	if (!isdigit(*c))
		return (-1);
	return (_isdigit(c + 1));
}

/**
 * close_file - Close the file when exit
 * @status: Nothing
 * @arg: File to be closed
 */
void close_file(int status, void *arg)
{
	FILE *fd = (FILE *)arg;

	(void)status;

	fclose(fd);
}

/**
 * free_stacktint - frees a stack_t list
 * @head: First node
 */
void free_stacktint(stack_t **head)
{
	stack_t *copy;

	while (*head != NULL)
	{
		copy = (*head)->next;
		free(*head);
		*head = copy;
	}
}

/**
 * free_line - Frees the commands when exit
 * @status: Nothing
 * @arg: Address of the commands
 */
void free_line(int status, void *arg)
{
	char **line = arg;

	(void)status;

	if (*line != NULL)
		free(*line);
}
