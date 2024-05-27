#ifndef V1_LISTE_H
#define V1_LISTE_H

struct List{
    int key;
    struct List* next;
};

struct List* new_List(int key);
void print_List(struct List* L);
struct List* merge_lists(struct List* L1, struct List* L2);
struct List* revert(struct List* L);


#endif