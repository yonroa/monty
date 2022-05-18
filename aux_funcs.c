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