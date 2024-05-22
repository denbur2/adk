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


int binary_search_right(int A[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == target) {
            result = mid; // update result
            left = mid + 1; // continue to search in the right half
        } else if (A[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}



int majority(int A[], int n){
    int mid = A[n / 2];
    printf("mid: %d\n", mid);
    printf("left: %d\n", binary_search_left(A, n, mid));
    printf("right: %d\n", binary_search_right(A, n, mid));
    printf("n: %d\n", n);
    if(binary_search_right(A, n, mid) - binary_search_left(A, n, mid) >= n/2){
        return mid;
    }
    return -1;


}
