#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

// Graph edge structure
struct Edge {
    int dest;
    int weight;
};

// Function to implement Dijkstra's algorithm
void dijkstra(const vector<vector<Edge>>& graph, int src) {
    int V = graph.size();
    vector<int> dist(V, INT_MAX);  // Stores shortest distances
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;  // Min-heap: {distance, vertex}

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (const Edge& edge : graph[u]) {
            int v = edge.dest;
            int weight = edge.weight;

            // Relaxation step
            if (dist[u] != INT_MAX && dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    // Print shortest distances
    cout << "Vertex \t Distance from Source (" << src << ")\n";
    for (int i = 0; i < V; ++i) {
        cout << i << " \t\t " << dist[i] << "\n";
    }
}

int main() {
    // Example graph (adjacency list)
    int V = 5;
    vector<vector<Edge>> graph(V);

    // Add edges (directed graph)
    graph[0].push_back({1, 4});
    graph[0].push_back({2, 1});
    graph[1].push_back({3, 1});
    graph[2].push_back({1, 2});
    graph[2].push_back({3, 5});
    graph[3].push_back({4, 3});

    // Run Dijkstra's algorithm from source vertex 0
    dijkstra(graph, 0);

    return 0;
}