#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "runtime_input.h"


void runtime_input(int B[], int* counter){
    char A[256];
    char *token;
    fgets(A, 256, stdin);
    token = strtok(A, " \r\n\t");
    while( token ){
        int zahl = atoi(token);
        B[*counter]=zahl;
        token = strtok(NULL, " \r\n\t");
        (*counter)++;
    }
}
