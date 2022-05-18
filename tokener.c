#include "monty.h"

/**
 * tokener - separate the words
 * @str: the string to be separate
 * @delim: the word separator
 * Return: the words separated
 */
char **tokener(char *str, char *delim)
{
	char **command = NULL;
	int words = counter(str), i = 1;

	command = malloc(sizeof(char *) * (words + 1));
	if (!command)
	{
		perror("Error malloc");
		return (NULL);
	}
	command[0] = strtok(str, delim);
	if (command[0] == NULL)
	{
		free_tokens(command);
		return (NULL);
	}
	while (i < (words + 1))
	{
		command[i] = strtok(NULL, delim);
		i++;
	}
	return (command);
}

/**
 * counter - count the words that have the command
 * @string: the command complete
 * Return: the number of words
 */
int counter(char *string)
{
	int linia = 0;
	unsigned int iter = 0;

	while (*string)
	{
		if (*string == ' ' || *string == '=' || *string == ':'
			|| *string == '\n' || *string == '\t')
			linia = 0;
		else if (linia == 0)
		{
			linia = 1;
			++iter;
		}
		++string;
	}
	return (iter);
}

/**
 * free_tokens - function that frees the memory space of all the tokens
 * @token: double pointer to be freed.
 */
void free_tokens(char **token)
{
	int index = 0;

	while (token[index] != NULL)
	{
		free(token[index]);
		index++;
	}
	free(token);
}
