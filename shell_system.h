#ifndef SHELL_SYSTEM
#define SHELL_SYSTEM

#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

#include "definitions.h"
#include "bricks.h"

#define START_SIZE 1

struct variable_struct* global_variable_array;
int global_variable_array_size;
int amount_of_global_variables;

int initShell();							//init system variables of shell
int reallocGlobalVariableArray();
void destroyShell();
void freeMemoryForVariable(struct variable_struct);
int addVariable(struct variable_struct);


#endif