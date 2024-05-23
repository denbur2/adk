#include "stack.h"
#include <stdio.h>

int main(void)
{
    char stack[10000];
    int stack_top = 0;

    while(1) {
        char ch = getchar();
        if(ch<' ') {
            break; // no more input
        }

        /// INSERT YOUR CODE HERE ///

        if(ch == 'a' || ch == 'b'){
            if(!empty(stack_top)){
                if(top(stack, &stack_top) == ch){
                    push(ch, &stack_top, stack);
                }else{
                    pop(&stack_top);
                }
            }else{
                push(ch, &stack_top, stack);
            }
        }

    }


    if( empty(stack_top) )
        printf("1\n");
    else
        printf("0\n");

    return 0;
}