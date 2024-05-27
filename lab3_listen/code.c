#include "read_list.h"
#include "v1_liste.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    struct List* L1 = read_list();
    struct List* L2 = read_list();

    print_List(L1);
    print_List(L2);

    struct List* L = merge_lists(L1, L2);
    struct List* L_reverted = revert(L);
    print_List(L_reverted);
    print_List(L);

    return 0;
}
