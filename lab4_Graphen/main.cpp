#include <iostream>
#include <string>
#include "graph.h"

int main() {
    class Graph* G = read_graph();
    print_graph(G);
    return 0;
}