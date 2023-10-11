#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * handle_builtin - handles built in commands
 * @command: command
 * Return: void
 */
void handle_builtin(void)
{
	extern char **environ;
	/*** Declares the environ variable ***/


	if (strcmp(command, "env") == 0)
	{
		char **env = environ;
		/*** Assign the environ variable to a local variable ***/

		/*** Iterate through environment variables & print them ***/

		while (*env != NULL)
		{
			printf("%s\n", *env);
			env++;
		}

		return; /** Return from func after printing environment **/
	}

	/*** Handle other built-in commands ***/
}

/**
 * main - tests the handle_builtin function
 * Return: 0
 */

int main(void)
{
	handle_builtin();
	return (0);
}
