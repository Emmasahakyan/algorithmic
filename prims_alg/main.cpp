#include <iostream>
#include <vector>
#include "graph_operations.h"

int main() {
    int v = 0;
    std::cout << "Enter number of vertices: " << std::endl;
    std::cin >> v;
    std::cout << std::endl;
    std::vector<std::vector<int>> graph(v, std::vector<int>(v));

    std::cout << "Enter the weights of edges, if there is not an edge enter '-1'." << std::endl;

    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            std::cin >> graph[i][j];
        }
    }
    std::cout << std::endl;

    mst(v, graph);

    return 0;
}
