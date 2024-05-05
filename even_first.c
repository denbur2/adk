#include <stdio.h>
#include <stdlib.h>
#include "even_first.h"


void even_first(int A[], int n) {
    int leftcount = 0;
    int rightcount = n - 1;
    int temp = 0;
    while (leftcount < rightcount) {
        
        if (A[leftcount] % 2 == 0) {  // even
            leftcount++;
        } else {                      // uneven
            while (A[rightcount] % 2 != 0 && rightcount > leftcount) {
                rightcount--;
            }
            if (rightcount > leftcount) {
                temp = A[rightcount];
                A[rightcount] = A[leftcount];
                A[leftcount] = temp;
            }
        }
    }
    return;
}