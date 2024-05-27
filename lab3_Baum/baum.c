#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "baum.h"

struct Tree* string_to_tree(char * string){
    char *token = strtok(string, " \r\n\t"); // Ersten Token aus dem String extrahieren
    string = NULL;
    if (token == NULL) {
        return NULL;
    }
    if (strcmp(token, "*") == 0) {
        return NULL;
    }
    struct Tree* t = (struct Tree*)malloc(sizeof(struct Tree)); // Speicher für den Baum reservieren
    t->key = atoi(token);
    t->left = string_to_tree(string);
    t->right = string_to_tree(string);
    return t;
}

void tree_to_stdout(struct Tree* t){
    if (t == NULL) {
        printf("* ");
        return;
    }
    printf("%d ", t->key);
    tree_to_stdout(t->left);
    tree_to_stdout(t->right);

}

