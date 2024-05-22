#include "runtime_input.h"
#include "a_und_b.h"
#include <stdio.h>

int main(){
    int B[256] = {0};
    int size = 0;
    runtime_input(B, &size);
    printf("%d\n", majority(B, size));

    /*
    for(int i = 0; i < 256; i++){
        if(B[i] == 0){
            break;
        }
        printf("%d\n", B[i]);
    }
    */
    return 0;
}