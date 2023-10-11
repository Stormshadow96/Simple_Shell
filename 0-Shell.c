#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

/**
 * main - our code
 * Return: 0 or void
 */
int main(void)
{
	char *args[] = {"/bin/ls", NULL};

	if (isatty(STDIN_FILENO))
	{
		while (1)
		{
			printf("$ ");
			char command[100];

			if (fgets(command, sizeof(command), stdin) == NULL)
				break;

			command[strcspn(command, "\n")] = '\0';

			if (strcmp(command, "exit") == 0)
				break;

			pid_t pid = fork();

			if (pid == 0)
			{
				execve(args[0], args, NULL);
				perror("execve");
				exit(EXIT_FAILURE);
			}
			else if (pid < 0)
			{
				perror("fork");
				exit(EXIT_FAILURE);
			}
			else
			{
				wait(NULL);
			}
		}
	}
	else
	{
		char command[100];

		if (fgets(command, sizeof(command), stdin) != NULL)
		{
			command[strcspn(command, "\n")] = '\0';

			execve(args[0], args, NULL);
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}

	return (0);
}
