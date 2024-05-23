#include "read_list.h"
#include "merge.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// insert code for struct List, new_List, and print_List from other lab here

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
        struct List* p = new_List(key);
        if(L == NULL) {
            L = p;
        } else {
            last->next = p;
        }
        last = p;
        number = strtok(NULL, " \n");
        if(number==NULL) {
            return L;
        }
        key = atoi(number);
    }
    return L;
}

int main()
{
    struct List* L1 = read_list();
    struct List* L2 = read_list();

    //print_List(L1);
    //print_List(L2);

    struct List* L = merge_lists(L1, L2);
    print_List(L);

    return 0;
}
