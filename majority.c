#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bin_search_right(){}
int bin_search_left(){}


int majority(int A[], int n){
    
    int possible = A[n/2];
    int mostleft=n;
    int mostright=0;
    
    if(n%2!=0){
        possible = A[(n-1)/2];
    }
    mostleft=bin_search_left(A, 0, possible, possible);
    mostright=bin_search_right(A, possible, n, possible);
    
    
    if(mostleft+mostright>=n/2){
        return possible;
    }
    return -1;
}
