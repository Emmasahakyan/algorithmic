#include "graph_operations.h"
#include <iostream>
#include <climits>

void min_edge(int v,vector<bool>& mstset,const vector<vector<int>> graph,vector<vector<int>>& edges)
{
    int min=INT_MAX;
    int index_1=-1;
    int index_2=-1;
    
    for(int k=0;k<v;k++){
        if(mstset[k]){
            for(int j=0;j<v;j++){
                if(graph[k][j]!=-1 && graph[k][j]<min && mstset[j]==false)
                {
                    min=graph[k][j];
                    index_1=k;
                    index_2=j;
                }
            }
        }
    }
    
    if(index_1 != -1 && index_2 != -1) {
        edges.push_back({index_1, index_2});
        mstset[index_2] = true;
    }
}


void print_mst(int v,const vector<vector<int>>& edges,const vector<vector<int>> graph)
{
    int total_weight = 0;
    for (const auto& edge : edges) {
        int u = edge[0], v = edge[1];
        cout << "Edge-" <<'{'<< u << ','<<v <<'}'<<"    "<<" with weight: " << graph[u][v] << endl;
        total_weight += graph[u][v];
    }
    cout << "Total weight of MST: " << total_weight << endl;
}


void mst(int v,const vector<vector<int>> graph)
{
    vector<bool> mstset(v,false);
    vector<vector<int>> edges; 
    mstset[0]=true;

    
    for(int i=0;i<v-1;i++){
        min_edge(v,mstset,graph,edges);   
    }
    
    print_mst(v,edges,graph); 
}
