#include <stdio.h>
#include <stdlib.h>
#include "mex.h"

int mex(int A[], int n){

/*
    //findet minimum
    int min = 0;
    for(int i = 0; i < n; i++){
        if(A[i] < A[min]){
            min = i;
        }
    }

    //plazieren minimum an erste Stelle
    int temp = A[0];
    A[0] = A[min];
    A[min] = temp;
*/
    // tu jedes Element an die Stelle im Array, die seiner Größe entspricht
    int count = 0;
    int plazieren = 0;
    int genommen = 0;
    int range = 0;

    printf("genommen: %d, plaziert: %d\n", genommen ,plazieren);
    for(int i = 0; i < n; i++){
            printf("-%d ", A[i]);
        }
    printf("\n");

    for(int i = 0; i < n; i++){
        if(genommen!=plazieren && genommen != A[genommen] && genommen < n && genommen >= 0 && range!=0){
            printf("genommen: %d, plaziert: %d\n", genommen ,plazieren);
                plazieren = genommen;
                genommen = A[plazieren];
                A[plazieren] = plazieren;
                for(int i = 0; i < n; i++){

                printf("-%d ", A[i]);
                }
                printf("\n");
        }else{
            printf("genommen: %d, plazieren: %d, count: %d\n", genommen ,plazieren, count);

            if(A[count]==count){
                count++;
            }
            if(A[count]<n && count <= i){
                plazieren = A[count];
                genommen = A[plazieren];
                A[plazieren] = plazieren;
                range = 1;
            }else{
                range = 0;
            }
            count++;

            for(int i = 0; i < n; i++){
                printf("+%d ", A[i]);
            }
            printf("\n");
        }
    }






    if(A[0]!=0){
        return 0;}
    for(int i = 0; i < n; i++){
        if(A[i]!=A[i+1]-1){
            return A[i]+1;
        }
    }

    return 0;
}