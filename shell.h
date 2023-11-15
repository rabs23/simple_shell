#ifndef SHELL_H_
#define SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

char **strtow(char *str, char *d);
char **strtow2(char *str, char d);
void prints_error(char *value, int count, char **argv);
void prompt(void);

#endif
