#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "baum.h"

int main(void)
{
    char line[1024];
    fgets(line, sizeof(line), stdin);
    struct Tree* t = string_to_tree(line);
    tree_to_stdout(t);
    return 0;
}
