#include "monty.h"

/**
 * main - main process of monty
 * @argc: Number of arguments
 * @argv: Array where is the file to be interpreted
 * Return: 0 if all is right
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
