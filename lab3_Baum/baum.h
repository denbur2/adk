#ifndef BAUM_H
#define BAUM_H

struct Tree {
    int key;
    struct Tree* left;
    struct Tree* right;
};

struct Tree* string_to_tree(char * string);

void tree_to_stdout(struct Tree* t);


#endif
