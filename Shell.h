#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys>
#include <sys>

#define MAX_COMMAND_LENGTH 100
#define MAX_ARGUMENTS 100

//Function prototypes//
void executeCommand(char *command);
void parseCommand(char *command, char **arguments);

#endif /* SHELL_H */
