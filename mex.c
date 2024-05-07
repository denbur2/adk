#include <stdio.h>
#include <stdlib.h>
#include "mex.h"

int mex(int A[], int n){

    // tut jedes Element an die Stelle im Array, die seiner Größe entspricht
    int count = 0;
    int plazieren = 0;
    int genommen = 0;
    int range = 0;

    for(int i = 0; i < n; i++){
        if(genommen!=plazieren && genommen != A[genommen] && genommen < n && genommen >= 0 && range!=0){ //kann getauscht werden?
                plazieren = genommen;
                genommen = A[plazieren];
                A[plazieren] = plazieren;
        }else{
            if(A[count]==count){
                count++;
            }
            if(A[count]<n && count < i){
                plazieren = A[count];
                genommen = A[plazieren];
                if(plazieren < n){
                    A[plazieren] = plazieren;
                }
                range = 1;
            }else{
                range = 0;
            }
            count++;
        }
    }

    // geht das array bis zur ersten ungereihmtheit durch und gibt die zahl zurück
    if(A[0]!=0){
        return 0;}
    for(int i = 0; i < n; i++){
        if(A[i]!=A[i+1]-1){
            return A[i]+1;
        }
    }

    return 0;
}