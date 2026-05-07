//DFS (Depth First Search)

#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int v;
    vector<vector<int>> adj;

public:
    Graph(int vertices) {
        v = vertices;
        adj.resize(v);
    }

    void addEdge(int u, int w) {
        adj[u].push_back(w);
        adj[w].push_back(u);
    }

    void DFSUtil(int node, vector<bool> &visited) {
        visited[node] = true;
        cout << node << " ";

        for (int i : adj[node]) {
            if (!visited[i]) {
                DFSUtil(i, visited);
            }
        }
    }

    void DFS(int start) {
        vector<bool> visited(v, false);
        DFSUtil(start, visited);
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "DFS Traversal: ";
    g.DFS(0);

    return 0;
}