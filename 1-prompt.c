#include "shell.h"

/**
 * prompt - program that displays a prompt and waits for a user to type command
 */

void prompt(void)
{
	PRINTER("$ ");
}
/**
 * prints_error - function that displays errorbased on command and how
 * many times the shell loops
 * @value: user input
 * @count: loop count
 * @argv: name of the program
 * Return: void
 */

void prints_error(char *value, int count, char **argv)
{
	char *e;

	PRINTER(argv[0]);
	PRINTER(": ");
	e = _itoa(count);
	PRINTER(e);
	free(e);
	PRINTER(": ");
	PRINTER(value);
	PRINTER(": not found\n");
}

