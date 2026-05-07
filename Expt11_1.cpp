//BFS (Breadth First Search)

#include <iostream>
#include <vector>
#include <queue>
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

    void BFS(int start) {
        vector<bool> visited(v, false);
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            cout << node << " ";

            for (int i : adj[node]) {
                if (!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);

    cout << "BFS Traversal: ";
    g.BFS(0);

    return 0;
}