#include "read_list.h"

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
