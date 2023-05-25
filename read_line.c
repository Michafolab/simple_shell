#include "shell.h"

/**
 * read_line - This function reads the string of the input.
 *
 * @i_eof: return value of getline function
 * Return: The string of the input should be returned in this environment
 */
char *read_line(int *i_eof)
{
	char *input = NULL;
	size_t bufsize = 0;

	*i_eof = getline(&input, &bufsize, stdin);

	return (input);
}
