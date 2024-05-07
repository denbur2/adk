#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "majority.h"

int binary_search_left(int A[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == target) {
            result = mid; // update result
            right = mid - 1; // continue to search in the left half
        } else if (A[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}



int majority(int A[], int n){}
