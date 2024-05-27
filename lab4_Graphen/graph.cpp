#include "graph.h"
#include <iostream>
#include <string>

class Graph* read_graph(){
    std::string line;
    std::getline(std::cin, line);
    int n = std::stoi(line);
    std::cout << n << std::endl;
    class Graph* G = new Graph;
    G->n = n;
    G->adj = new int*[n];
    for(int i = 0; i < n; i++){
        G->adj[i] = new int[n];
    }
    for(int i = 0; i < n; i++){
        std::getline(std::cin, line);
        for(int j = 0; j < n; j++){
            G->adj[i][j] = line[j] - '0';
        }
    }
    return G;
}

void print_graph(class Graph* G){
    for(int i = 0; i < G->n; i++){
        for(int j = 0; j < G->n; j++){
            std::cout << G->adj[i][j];
        }
        std::cout << std::endl;
    }
}
