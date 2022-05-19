#include "monty.h"

/**
 * main - main process of monty
 * @argc: Number of arguments
 * @argv: Array where is the file to be interpreted
 * Return: 0 if all is right
 */
int main(int argc, char **argv)
{
	FILE *fd = NULL;
	char *line = NULL, *command = NULL;
	size_t lon = 0;
	unsigned int number_line = 0;
	stack_t *stack = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	on_exit(close_file, fd);
	on_exit(free_line, &line);
	while (getline(&line, &lon, fd) != -1)
	{
		++number_line;
		command = strtok(line, "\n\t\r ");
		if (command != NULL && command[0] != '#')
			call_func(command, &stack, number_line);
	}
	free_stacktint(&stack);
	exit(EXIT_SUCCESS);
}
