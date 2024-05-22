#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include a_und_b.h


//////////////////// Stack ///////////////////////

char stack[10000];
int stack_top = 0;

int empty(void)
{
    if(stack_top==0)
        return 1;
    else
        return 0;
}

void push(char ch)
{
    assert(stack_top < sizeof(stack));
    stack[stack_top++] = ch;
}

char top(void)
{
    assert( !empty() );
    return stack[stack_top-1];
}

void pop(void)
{
    assert( !empty() );
    stack_top--;
}

//////////////////////////////////////////////////

int a_und_b(char *ch)
{
    while(1) {
        char ch = getchar();
        if(ch<' ') {
            break; // no more input
        }

        /// INSERT YOUR CODE HERE ///

    }

    if( /// INSERT MORE CODE HERE /// )
        printf("1\n");
    else
        printf("0\n");

    return 0;
}