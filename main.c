#include "monty.h"

/**
 * main - main process of monty
 * @argc: Number of arguments
 * @argv: Array where is the file to be interpreted
 * Return: 0 if all is right
 */
int main(int argc, char **argv)
{
	int fd = 0, i;
	char *buffer = NULL, **commands = NULL;
	ssize_t r_bytes = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file <%s>", argv[1]);
		exit(EXIT_FAILURE);
	}
	buffer = malloc(sizeof(char) * BUFSIZ);
	if (!buffer)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	r_bytes = read(fd, buffer, BUFSIZ);
	if (r_bytes == -1)
	{
		printf("Error read");
		free(buffer);
		exit(EXIT_FAILURE);
	}
	buffer[r_bytes] = '\0';
	commands = tokener(buffer, "\n");
	for (i = 0; commands; i++)
		printf("%s\n", commands[i]);
	printf("\n");
	free(buffer);
	return (0);
}
