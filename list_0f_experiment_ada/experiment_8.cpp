#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Edge structure: src, dest, weight
struct Edge {
    int src, dest, weight;
};

// Union-Find (Disjoint Set Union) data structure
class DSU {
    vector<int> parent, rank;
public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i; // Each node is its own parent initially
        }
    }

    // Find the root parent of a node (with path compression)
    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]); // Path compression
        }
        return parent[u];
    }

    // Union two sets by rank (optimization)
    void unionSets(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);

        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) {
                parent[rootV] = rootU;
            } else if (rank[rootU] < rank[rootV]) {
                parent[rootU] = rootV;
            } else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }
};

// Kruskal's Algorithm to find MST
vector<Edge> kruskalMST(vector<Edge>& edges, int V) {
    // Sort edges by weight (ascending)
    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.weight < b.weight;
    });

    DSU dsu(V);
    vector<Edge> mst;
    int edgeCount = 0;

    for (Edge edge : edges) {
        if (edgeCount == V - 1) break; // MST has V-1 edges

        int srcRoot = dsu.find(edge.src);
        int destRoot = dsu.find(edge.dest);

        if (srcRoot != destRoot) { // No cycle
            mst.push_back(edge);
            dsu.unionSets(srcRoot, destRoot);
            edgeCount++;
        }
    }

    return mst;
}

int main() {
    int V = 4; // Number of vertices
    vector<Edge> edges = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}
    };

    vector<Edge> mst = kruskalMST(edges, V);

    cout << "Edges in MST (Kruskal's Algorithm):\n";
    cout << "Src\tDest\tWeight\n";
    for (Edge edge : mst) {
        cout << edge.src << "\t" << edge.dest << "\t" << edge.weight << "\n";
    }

    return 0;
}