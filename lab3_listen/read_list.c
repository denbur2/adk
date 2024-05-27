#include "read_list.h"
#include "v1_liste.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct List* read_list()
{
    char line[256];
    fgets( line, sizeof(line), stdin);
    struct List* L = NULL;
    struct List* last = NULL;
    char* number = strtok(line, " \n");
    if(number==NULL) {
        return L;
    }
    int key = atoi(number);
    while(key != 0) {
        struct List* dieListe = new_List(key);
        if(L == NULL) {
            L = dieListe;
        } else {
            last->next = dieListe;
        }
        last = dieListe;
        number = strtok(NULL, " \n");
        if(number==NULL) {
            return L;
        }
        key = atoi(number);
    }
    return L;
}
