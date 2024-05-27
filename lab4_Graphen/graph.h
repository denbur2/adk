#ifndef GRAPH_H
#define GRAPH_H

class Graph {
public:
    int n;
    int** adj;
};

class Graph* read_graph();
void print_graph(class Graph* G);


#endif