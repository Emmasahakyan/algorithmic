#ifndef GRAPH_OPERATIONS_H
#define GRAPH_OPERATIONS_H

#include <vector>

void min_edge(int v, std::vector<bool>& mstset, const std::vector<std::vector<int>>& graph, std::vector<std::vector<int>>& edges);
void print_mst(int v, const std::vector<std::vector<int>>& edges, const std::vector<std::vector<int>>& graph);
void mst(int v, const std::vector<std::vector<int>>& graph);

#endif
