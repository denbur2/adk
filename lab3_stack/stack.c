#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "stack.h"

#define STACK_SIZE 10000

//////////////////// Stack ///////////////////////

int empty(int stack_top)
{
    if(stack_top==0)
        return 1;
    else
        return 0;
}

void push(char ch, int *stack_top, char *stack)
{
    assert(*stack_top < STACK_SIZE);
    stack[*stack_top] = ch;
    (*stack_top)++;
}

char top(char *stack, int *stack_top)
{
    assert( !empty(*stack_top) );
    return stack[*stack_top-1];
}

void pop(int *stack_top)
{
    assert( !empty(*stack_top) );
    (*stack_top)--;
}

//////////////////////////////////////////////////