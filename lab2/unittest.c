#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "majority.h"

int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = 9;
    int target = 5;
    int result = binary_search_left(A, n, target);
    printf("result = %d\n", result);
    return 0;
}