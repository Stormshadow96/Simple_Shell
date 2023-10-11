#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * handle_builtin - handles built in commands
 * @command: command
 * Return: 0
 */

/****** Functions to handle built in commands ******/

int handle_builtin(char *command)
{
	if (strcmp(command, "exit") == 0)
	{
		/*** CLEAN UP OR CLOSE ANY RESOURCES IF NEEDED ***/
		/*** ... ***/

		/*** Exit the shell program ***/
		exit(0);
	}

	/*** Handle other built in commands, if any ***/
	/*** ... ***/

	/*** Return 0 to indicate the command was not built in ***/
	return (0);
}

/**
 * main - code
 * Return: 0
 */

int main(void)
{
	char command[100];

	fgets(command, sizeof(command), stdin);
	command[strcspn(command, "\n")] = '\0';

	if (handle_builtin(command) == 0)
	{
		/*** Handle non-built-in commands ***/
		/*** ... ***/
	}
	return (0);

}
