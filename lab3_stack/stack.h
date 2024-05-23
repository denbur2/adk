#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"


int empty(int stack_top);
void push(char ch, int *stack_top, char *stack);
char top(char *stack, int *stack_top);
void pop(int *stack_top);

#endif