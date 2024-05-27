#include <stdio.h>
#include <stdlib.h>
#include "v1_liste.h"

struct List* new_List(int key){
    struct List* L = (struct List*)malloc(sizeof(struct List));
    L->key = key;
    L->next = NULL;
    return L;
}

void print_List(struct List* L){
    while(L != NULL){
        printf("%d ", L->key);
        L = L->next;
    }
    printf("\n");
}

struct List* merge_lists(struct List* L1, struct List* L2){
    struct List* merged = NULL;
    struct List* tail = NULL; // Pointer auf das letzte Element der neuen Liste

    if (L1 == NULL) {
        return L2;
    }

    if (L2 == NULL) {
        return L1;
    }

    while (L1 != NULL && L2 != NULL) {
        if (merged == NULL) {
            merged = new_List(L1->key);
            tail = merged;
        } else {
            tail->next = new_List(L1->key);
            tail = tail->next;
        }

        tail->next = new_List(L2->key);
        tail = tail->next;

        L1 = L1->next;
        L2 = L2->next;
    }

    while (L1 != NULL) {
        tail->next = new_List(L1->key);
        tail = tail->next;
        L1 = L1->next;
    }

    while (L2 != NULL) {
        tail->next = new_List(L2->key);
        tail = tail->next;
        L2 = L2->next;
    }

    return merged;
}

struct List* revert(struct List* L){
    struct List* prev = NULL;
    struct List* current = L;
    struct List* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}